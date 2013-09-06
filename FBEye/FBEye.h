//
//  FBEye.h
//  FB Eye
//
//  Created by Alex Zielenski on 9/5/13.
//  Copyright (c) 2013 Alex Zielenski. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FBEye : NSObject
@property (strong) NSDictionary *settings;
+ (id)sharedInstance;

- (NSColor *)sourceListBackgroundColor;
- (NSColor *)activeWindowTitleColor;
- (NSColor *)inactiveWindowTitleColor;
- (NSGradient *)selectionGradient;
- (NSGradient *)inactiveSelectionGradient;
- (CGFloat)selectionAngle;
- (NSBackgroundStyle)windowTitleBackgroundStyle;

@end
