//
//  FBSwizzler.h
//  FB Eye
//
//  Created by Alex Zielenski on 9/5/13.
//  Copyright (c) 2013 Alex Zielenski. All rights reserved.
//

#import <Foundation/Foundation.h>

// This is a class for streamlining swizzling. Simply create a new class of any name you want and
// this will swizzle any methods with a prefix defined in the +prefix method

// Example:
/*
 
 @interface FBClass : NSObject
 
 + (NSString *)prefix;
 - (void)fbclass_swizzledMethod:(int)k;
 
 @end
 
 @implementation FBClass
 
 + (NSString *)fbswizzler_prefix {
     return @"fbclass_";
 }
 
 ...
 
 @end
 
 [FBSwizzler swizzleClass:@class(FBClass) forClass:@class(destination)];
 
 this will swizzle fbclass_swizzledMethod to swizzledMethod on the destination class
 
 */

@interface FBSwizzler : NSObject
+ (BOOL)swizzleClass:(Class)source forClass:(Class)destination;

// Calls above method with the superclass of source
+ (BOOL)swizzleClass:(Class)source;
@end
