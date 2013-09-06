//
//  FBCell.h
//  FB Eye
//
//  Created by Alex Zielenski on 9/5/13.
//  Copyright (c) 2013 Alex Zielenski. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSCell ()
- (BOOL)isOnToolbar;
@end

@interface FBCell : NSCell
- (BOOL)isOnToolbar;
- (NSBackgroundStyle)fbeye_interiorBackgroundStyle;
@end

@interface FBButtonCell: NSButtonCell
- (NSBackgroundStyle)fbeye_interiorBackgroundStyle;
- (NSBackgroundStyle)fbeye_backgroundStyle;
@end


@interface FBSegmentedCell : NSSegmentedCell
- (NSBackgroundStyle)fbeye_interiorBackgroundStyleForSegment:(NSInteger)segment;
@end