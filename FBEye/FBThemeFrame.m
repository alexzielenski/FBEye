//
//  FBThemeFrame.m
//  FB Eye
//
//  Created by Alex Zielenski on 9/5/13.
//  Copyright (c) 2013 Alex Zielenski. All rights reserved.
//

#import "FBThemeFrame.h"
#import "FBEye.h"

@implementation FBThemeFrame

+ (NSString *)fbswizzler_prefix {
    return @"fbeye_";
}

- (id)fbeye__customTitleCell {
    NSTextFieldCell *cell = [self fbeye__customTitleCell];
    [cell setBackgroundStyle:[FBEye.sharedInstance windowTitleBackgroundStyle]];
    return cell;
}

- (void)fbeye__drawTitleStringIn:(NSRect)rect withColor:(NSColor *)color {
    NSColor *clr = (self.window.isKeyWindow) ? [FBEye.sharedInstance activeWindowTitleColor] : [FBEye.sharedInstance inactiveWindowTitleColor];
	if (!clr)
		clr = color;
	[self fbeye__drawTitleStringIn:rect withColor:clr];
}

@end
