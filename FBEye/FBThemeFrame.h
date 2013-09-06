//
//  FBThemeFrame.h
//  FB Eye
//
//  Created by Alex Zielenski on 9/5/13.
//  Copyright (c) 2013 Alex Zielenski. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "NSThemeFrame.h"

@interface FBThemeFrame : NSThemeFrame
- (id)fbeye__customTitleCell;
- (void)fbeye__drawTitleStringIn:(NSRect)rect withColor:(NSColor *)color;
@end
