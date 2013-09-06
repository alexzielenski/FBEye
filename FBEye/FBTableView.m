//
//  FBTableView.m
//  FB Eye
//
//  Created by Alex Zielenski on 9/5/13.
//  Copyright (c) 2013 Alex Zielenski. All rights reserved.
//

#import "FBTableView.h"
#import "FBEye.h"

@implementation FBTableView

+ (NSString *)fbswizzler_prefix {
    return @"fbeye_";
}

- (NSColor *)fbeye_backgroundColor {
	if ([self selectionHighlightStyle] == NSTableViewSelectionHighlightStyleSourceList) {
        NSColor *color = [FBEye.sharedInstance sourceListBackgroundColor];
        if (color)
            return color;
    }
	return [self fbeye_backgroundColor];
}

- (void)fbeye__drawSourceListHighlightInRect:(NSRect)rect isButtedUpRow:(BOOL)butted {
	NSGradient *p = ([[self window]isKeyWindow]) ? [FBEye.sharedInstance selectionGradient]:[FBEye.sharedInstance inactiveSelectionGradient];
	if (!p) {
        [self fbeye__drawSourceListHighlightInRect:rect isButtedUpRow:butted];
		return;
	}
    
	[p drawInRect:rect angle:-90];
	
	NSColor *stroke = nil;
	[p getColor:&stroke location:0 atIndex:0];
	[stroke set];
}

@end
