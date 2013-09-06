//
//  FBEye.m
//  FB Eye
//
//  Created by Alex Zielenski on 9/5/13.
//  Copyright (c) 2013 Alex Zielenski. All rights reserved.
//

#import "FBEye.h"
#import "FBSwizzler.h"

#import "FBTableView.h"
#import "FBThemeFrame.h"
#import "FBCell.h"

#define ControllerIdentifier @"com.alexzielenski.fbeye2.controller"
#import "Defines.h"

@implementation FBEye

+ (FBEye *)sharedInstance {
    static dispatch_once_t pred;
    static FBEye *shared = nil;
    
    dispatch_once(&pred, ^{
        shared = [[self alloc] init];
    });
    
    return shared;
}

+ (void)load {
    NSLog(@"loaded FBEye");
    
    // Not done
//    [FBSwizzler swizzleClass:[FBCell class]];
//    [FBSwizzler swizzleClass:[FBButtonCell class]];
    [FBSwizzler swizzleClass:[FBSegmentedCell class]];
    [FBSwizzler swizzleClass:[FBTableView class]];
    [FBSwizzler swizzleClass:[FBThemeFrame class]];
    
    for (NSWindow *win in [[NSApplication sharedApplication] windows]) {
		NSView *themeFrame = [win.contentView superview];
		// Fix for finder and possibly other things
		for (;;) {
			if (![themeFrame respondsToSelector:@selector(_resetTitleFont)] && themeFrame.superview) {
				themeFrame = [themeFrame superview];
			} else {
				break;
			}
		}
		[win display];
		[themeFrame display];
	}
    
}

- (id)init {
    if ((self = [super init])) {
        self.settings = [[NSUserDefaults standardUserDefaults] persistentDomainForName:ControllerIdentifier];
    }
    
    return self;
}

#define Prefs

- (NSColor *)sourceListBackgroundColor {
    static NSColor *sourceListColor = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSDictionary *colorDict = [self.settings objectForKey:SourceListKey];
        sourceListColor = colorFromDictionary(colorDict);
    });
    
    return sourceListColor;
}

- (NSColor *)activeWindowTitleColor {
    static NSColor *activeWindowTitleColor = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSDictionary *colorDict = [self.settings objectForKey:ActiveWindowKey];
        activeWindowTitleColor = colorFromDictionary(colorDict);
    });
    
    return activeWindowTitleColor;
}

- (NSColor *)inactiveWindowTitleColor {
    static NSColor *inactiveWindowTitleColor = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSDictionary *colorDict = [self.settings objectForKey:InactiveWindowKey];
        inactiveWindowTitleColor = colorFromDictionary(colorDict);
    });
    
    return inactiveWindowTitleColor;
}

- (NSGradient *)selectionGradient {
    static NSGradient *selectionGradient = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSDictionary *startingDict = [self.settings objectForKey:StartingSelectionKey];
        NSDictionary *endingDict   = [self.settings objectForKey:EndingSelectionKey];
        
        selectionGradient = [[NSGradient alloc] initWithStartingColor:colorFromDictionary(startingDict) endingColor:colorFromDictionary(endingDict)];
    });
    
    return selectionGradient;
}

- (NSGradient *)inactiveSelectionGradient {
    static NSGradient *selectionGradient = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSDictionary *startingDict = [self.settings objectForKey:InactiveStartingSelectionKey];
        NSDictionary *endingDict   = [self.settings objectForKey:InactiveEndingSelectionKey];
        
        selectionGradient = [[NSGradient alloc] initWithStartingColor:colorFromDictionary(startingDict) endingColor:colorFromDictionary(endingDict)];
    });
    
    return selectionGradient;
}

- (CGFloat)selectionAngle {
    return [[self.settings objectForKey:SelectionAngleKey] doubleValue];
}

- (NSBackgroundStyle)windowTitleBackgroundStyle {
    NSColor *ac = [[self activeWindowTitleColor] colorUsingColorSpaceName:NSCalibratedWhiteColorSpace];
	if (!ac)
		return NSBackgroundStyleRaised;
    
	CGFloat white = ac.whiteComponent;
	return ((white > 0.5) ? NSBackgroundStyleLowered : NSBackgroundStyleRaised);
}

@end
