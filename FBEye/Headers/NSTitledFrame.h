/*
 *     Generated by class-dump 3.3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSFrameView.h"

@class NSDocumentDragButton;

@interface NSTitledFrame : NSFrameView
{
    long long resizeFlags;
    NSDocumentDragButton *fileButton;
    struct CGSize titleCellSize;
}

+ (void)initialize;	// IMP=0x000206eb
+ (double)_windowBorderThickness:(unsigned long long)arg1;	// IMP=0x005c7681
+ (double)_minXWindowBorderWidth:(unsigned long long)arg1;	// IMP=0x005c80d8
+ (double)_maxXWindowBorderWidth:(unsigned long long)arg1;	// IMP=0x005c80be
+ (double)_minYWindowBorderHeight:(unsigned long long)arg1;	// IMP=0x005c80a4
+ (BOOL)_resizeFromEdge;	// IMP=0x005c769e
+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x000467dc
+ (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x0004e1c9
+ (struct CGSize)minFrameSizeForMinContentSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x0016d2d9
+ (struct CGSize)minContentSizeForMinFrameSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x005c7ff8
+ (double)minFrameWidthWithTitle:(id)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x005c7e13
+ (struct CGSize)_titleCellSizeForTitle:(id)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x005ca94a
+ (double)_titleCellHeight:(unsigned long long)arg1;	// IMP=0x005c7de1
+ (double)_windowTitlebarTitleMinHeight:(unsigned long long)arg1;	// IMP=0x005c7db1
+ (double)_titlebarHeight:(unsigned long long)arg1;	// IMP=0x005c7cfa
+ (struct CGSize)sizeOfTitlebarButtons:(unsigned long long)arg1;	// IMP=0x005cb186
+ (double)windowTitlebarLinesSpacingWidth:(unsigned long long)arg1;	// IMP=0x005c76a6
+ (double)windowTitlebarTitleLinesSpacingWidth:(unsigned long long)arg1;	// IMP=0x005c76c3
+ (double)_contentToFrameMinXWidth:(unsigned long long)arg1;	// IMP=0x005c7ce0
+ (double)_contentToFrameMaxXWidth:(unsigned long long)arg1;	// IMP=0x005c7cc6
+ (double)_contentToFrameMinYHeight:(unsigned long long)arg1;	// IMP=0x005c7cac
+ (double)_contentToFrameMaxYHeight:(unsigned long long)arg1;	// IMP=0x005c7c8a
- (void)dealloc;	// IMP=0x001a6ee4
- (BOOL)isOpaque;	// IMP=0x000f82c5
- (BOOL)worksWhenModal;	// IMP=0x005c8cac
- (void)propagateFrameDirtyRects:(struct CGRect)arg1;	// IMP=0x005c94c3
- (void)_showDrawRect:(struct CGRect)arg1;	// IMP=0x005c91f7
- (id)frameHighlightColor;	// IMP=0x005c8b81
- (id)frameShadowColor;	// IMP=0x005c8a56
- (void)setFrameOrigin:(struct CGPoint)arg1;	// IMP=0x005c766a
- (void)tileAndSetWindowShape:(BOOL)arg1;	// IMP=0x0004d2b8
- (void)tile;	// IMP=0x005c8a40
- (void)setTitle:(id)arg1;	// IMP=0x0008a233
- (void)_drawTitleStringIn:(struct CGRect)arg1 withColor:(id)arg2;	// IMP=0x00104216
- (id)titleFont;	// IMP=0x0008bcda
- (id)titleButtonOfClass:(Class)arg1;	// IMP=0x005c8972
- (id)initTitleButton:(id)arg1;	// IMP=0x005c88a4
- (id)newCloseButton;	// IMP=0x005c8791
- (id)newZoomButton;	// IMP=0x005c867e
- (id)newMiniaturizeButton;	// IMP=0x005c856b
- (id)newFileButton;	// IMP=0x005c8461
- (id)fileButton;	// IMP=0x000f2afe
- (BOOL)_eventInTitlebar:(id)arg1;	// IMP=0x005cb30f
- (BOOL)acceptsFirstMouse:(id)arg1;	// IMP=0x0023f2e5
- (void)mouseDown:(id)arg1;	// IMP=0x0023f384
- (void)_minimizeWindowWithDoubleClick:(id)arg1;	// IMP=0x005c83a0
- (void)mouseUp:(id)arg1;	// IMP=0x0023fc7a
- (unsigned long long)resizeEdgeForEvent:(id)arg1;	// IMP=0x0023f459
- (struct CGSize)_resizeDeltaFromPoint:(struct CGPoint)arg1 toEvent:(id)arg2;	// IMP=0x005c82fe
- (struct CGRect)_validFrameForResizeFrame:(struct CGRect)arg1 fromResizeEdge:(unsigned long long)arg2;	// IMP=0x005c90a0
- (struct CGRect)frame:(struct CGRect)arg1 resizedFromEdge:(unsigned long long)arg2 withDelta:(struct CGSize)arg3;	// IMP=0x005cb51e
- (void)resizeWithEvent:(id)arg1;	// IMP=0x005caaea
- (long long)resizeFlags;	// IMP=0x005c7670
- (void)setDocumentEdited:(BOOL)arg1;	// IMP=0x005c80f2
- (struct CGSize)miniaturizedSize;	// IMP=0x005c903c
- (struct CGSize)minFrameSize;	// IMP=0x005c7c07
- (double)_windowBorderThickness;	// IMP=0x005c7bdf
- (double)_windowTitlebarXResizeBorderThickness;	// IMP=0x005c7bc5
- (double)_windowTitlebarYResizeBorderThickness;	// IMP=0x005c7ba3
- (double)_windowResizeBorderThickness;	// IMP=0x005c7b79
- (double)_minXWindowBorderWidth;	// IMP=0x005c7b5f
- (double)_maxXWindowBorderWidth;	// IMP=0x005c7b45
- (double)_minYWindowBorderHeight;	// IMP=0x005c7b2b
- (id)_customTitleCell;	// IMP=0x0008bafc
- (void)_invalidateTitleCellWidth;	// IMP=0x0008aaac
- (double)_titleCellHeight;	// IMP=0x005c7a5b
- (struct CGSize)_titleCellSize;	// IMP=0x000ec5cd
- (double)_titlebarHeight;	// IMP=0x005c79bf
- (struct CGRect)titlebarRect;	// IMP=0x005cb428
- (struct CGRect)_maxTitlebarTitleRect;	// IMP=0x000f20fb
- (struct CGRect)_titlebarTitleRect;	// IMP=0x005c76d1
- (double)_windowTitlebarTitleMinHeight;	// IMP=0x005c798f
- (struct CGRect)dragRectForFrameRect:(struct CGRect)arg1;	// IMP=0x0004f772
- (struct CGSize)sizeOfTitlebarButtons;	// IMP=0x0004bbb8
- (struct CGSize)_sizeOfTitlebarFileButton;	// IMP=0x005c76ff
- (double)_windowTitlebarButtonSpacingWidth;	// IMP=0x005c7967
- (double)_minXTitlebarButtonsWidth;	// IMP=0x005c7912
- (double)_maxXTitlebarButtonsWidth;	// IMP=0x005c787e
- (double)windowTitlebarLinesSpacingWidth;	// IMP=0x005c7856
- (double)windowTitlebarTitleLinesSpacingWidth;	// IMP=0x005c7715
- (double)_minLinesWidthWithSpace;	// IMP=0x005c7811
- (struct CGPoint)_closeButtonOrigin;	// IMP=0x005cbb17
- (struct CGPoint)_zoomButtonOrigin;	// IMP=0x005cb1a7
- (struct CGPoint)_collapseButtonOrigin;	// IMP=0x005cbbf9
- (struct CGPoint)_fileButtonOrigin;	// IMP=0x005cba2d
- (double)_maxYTitlebarDragHeight;	// IMP=0x005c77ef
- (double)_minXTitlebarDragWidth;	// IMP=0x005c77d5
- (double)_maxXTitlebarDragWidth;	// IMP=0x005c77bb
- (double)_contentToFrameMinXWidth;	// IMP=0x005c77a1
- (double)_contentToFrameMaxXWidth;	// IMP=0x005c7787
- (double)_contentToFrameMinYHeight;	// IMP=0x005c776d
- (double)_contentToFrameMaxYHeight;	// IMP=0x005c774b
- (struct CGRect)contentRect;	// IMP=0x000a9c29
- (double)_windowResizeCornerThickness;	// IMP=0x005c7723
- (struct CGRect)_minYResizeRect;	// IMP=0x005ca845
- (struct CGRect)_minYminXResizeRect;	// IMP=0x005ca43c
- (struct CGRect)_minYmaxXResizeRect;	// IMP=0x005ca324
- (struct CGRect)_minXResizeRect;	// IMP=0x005ca74f
- (struct CGRect)_minXminYResizeRect;	// IMP=0x005ca1c8
- (struct CGRect)_minXmaxYResizeRect;	// IMP=0x005ca090
- (struct CGRect)_maxYResizeRect;	// IMP=0x005ca65a
- (struct CGRect)_maxYminXResizeRect;	// IMP=0x005c9f8b
- (struct CGRect)_maxYmaxXResizeRect;	// IMP=0x005c9e83
- (struct CGRect)_maxXResizeRect;	// IMP=0x005ca551
- (struct CGRect)_maxXminYResizeRect;	// IMP=0x005c9d1d
- (struct CGRect)_maxXmaxYResizeRect;	// IMP=0x005c9bd2
- (struct CGRect)_minXTitlebarResizeRect;	// IMP=0x005c9a9a
- (struct CGRect)_maxXTitlebarResizeRect;	// IMP=0x005c994f
- (struct CGRect)_minXBorderRect;	// IMP=0x005c8fa0
- (struct CGRect)_maxXBorderRect;	// IMP=0x005c8ee9
- (struct CGRect)_maxYBorderRect;	// IMP=0x005c8dc8
- (struct CGRect)_minYBorderRect;	// IMP=0x005c8ccb

@end

