//
//  FBSwizzler.m
//  FB Eye
//
//  Created by Alex Zielenski on 9/5/13.
//  Copyright (c) 2013 Alex Zielenski. All rights reserved.
//

#import "FBSwizzler.h"
#import <objc/runtime.h>

BOOL enumerateMethods(Class, Class, const char *);

char *substring(const char* str, size_t begin, size_t len)
{
    if (str == 0 || strlen(str) == 0 || strlen(str) < begin || strlen(str) < (begin+len))
        return 0;
    
    return strndup(str + begin, len);
}


@interface NSObject (Prefix)
+ (NSString *)fbswizzler_prefix;
@end

@implementation FBSwizzler

+ (BOOL)swizzleClass:(Class)source {
    return [self swizzleClass:source forClass:[source superclass]];
}

+ (BOOL)swizzleClass:(Class)source forClass:(Class)destination {
    const char *prefix = "";
    if ([source respondsToSelector:@selector(fbswizzler_prefix)]) {
        prefix = [[source fbswizzler_prefix] UTF8String];
    }

    BOOL success = enumerateMethods(destination, source, prefix);
    // The above method only gets instance variables. Do the same method for the metaclass of the class
    success     &= enumerateMethods(object_getClass(destination), object_getClass(source), prefix);
    
    return success;
}
@end

BOOL enumerateMethods(Class destination, Class source, const char *prefix) {
    unsigned int methodCount;
    Method *methodList = class_copyMethodList(source, &methodCount);
    BOOL success = NO;
    
    for (int i = 0; i < methodCount; i++) {
        Method method = methodList[i];
        SEL selector  = method_getName(method);
        const char *methodName   = sel_getName(selector);
        
        // dont even try to swizzle this method
        if (strcmp(methodName, "fbswizzler_prefix") == 0)
            continue;
        
        char *potentialPrefix = substring(methodName, 0, strlen(prefix));
        
        // We only swizzle methods that have the specified prefix
        if (strcmp(prefix, potentialPrefix) == 0 && strlen(prefix) > 0) {
            
            // Since the prefix is valid, get the name of the method to swizzle on the destination class by removing the prefix
            char *newSelector = substring(methodName, strlen(prefix), strlen(methodName) - strlen(prefix));
            NSString *selectorString = [NSString stringWithUTF8String:newSelector];
            free(newSelector);
            
            SEL destinationSelector = NSSelectorFromString(selectorString);
            
            Method originalMethod = class_getInstanceMethod(destination, destinationSelector);
            
            if (strcmp(method_getTypeEncoding(originalMethod), method_getTypeEncoding(method)) != 0) {
                // Incompatible type encoding
                success = NO;
                free(potentialPrefix);
                continue;
            }
            
            // We are re-adding the destination selector because it could be on a superclass and not on the class itself. This method could fail
            class_addMethod(destination, destinationSelector, method_getImplementation(originalMethod), method_getTypeEncoding(originalMethod));
            // Add the implementation of the replaced method at the prefixed selector
            class_addMethod(destination, selector, method_getImplementation(method), method_getTypeEncoding(method));
            
            // Retrieve the two new methods at their respective paths
            Method m1 = class_getInstanceMethod(destination, selector);
            Method m2 = class_getInstanceMethod(destination, destinationSelector);
            
            
            method_exchangeImplementations(m1, m2);
            
            success &= YES;
            
        } else {
            // Add any extra methods to the class but don't swizzle them
            class_addMethod(destination, selector, method_getImplementation(method), method_getTypeEncoding(method));
        }
        
        free(potentialPrefix);
    }
    
    free(methodList);
    return success;
}
