//
//  FBCell.m
//  FB Eye
//
//  Created by Alex Zielenski on 9/5/13.
//  Copyright (c) 2013 Alex Zielenski. All rights reserved.
//

#import "FBCell.h"

@implementation FBCell

+ (NSString *)fbswizzler_prefix {
    return @"fbeye_";
}

- (BOOL)isOnToolbar {
    NSView *v = self.controlView.superview;
    while (v) {
        if ([v isKindOfClass:NSClassFromString(@"NSToolbarItemViewer")])
            return YES;
        
        v = v.superview;
    }
    
    return NO;
}

- (NSBackgroundStyle)fbeye_interiorBackgroundStyle {
    if (self.isOnToolbar) {
        return NSBackgroundStyleLowered;
    }
    
    return [self fbeye_interiorBackgroundStyle];
}

@end

@implementation FBButtonCell

+ (NSString *)fbswizzler_prefix {
    return @"fbeye_";
}

- (NSBackgroundStyle)fbeye_backgroundStyle {
    if (self.isOnToolbar) {
        return NSBackgroundStyleLowered;
    }
    
    return [self fbeye_backgroundStyle];
}


- (NSBackgroundStyle)fbeye_interiorBackgroundStyle {
    if (self.isOnToolbar) {
        return NSBackgroundStyleLowered;
    }
    
    return [self fbeye_interiorBackgroundStyle];
}

@end

@implementation FBSegmentedCell

+ (NSString *)fbswizzler_prefix {
    return @"fbeye_";
}

- (NSBackgroundStyle)fbeye_interiorBackgroundStyleForSegment:(NSInteger)segment {
    if (self.isOnToolbar) {
        return NSBackgroundStyleLowered;
    }
    
    return [self fbeye_interiorBackgroundStyleForSegment:segment];
}

@end