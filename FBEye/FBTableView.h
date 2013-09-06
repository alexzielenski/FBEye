//
//  FBTableView.h
//  FB Eye
//
//  Created by Alex Zielenski on 9/5/13.
//  Copyright (c) 2013 Alex Zielenski. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FBTableView : NSTableView

+ (NSString *)fbswizzler_prefix;
- (NSColor *)fbeye_backgroundColor;
- (void)fbeye__drawSourceListHighlightInRect:(NSRect)rect isButtedUpRow:(BOOL)butted;

@end
