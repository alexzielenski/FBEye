/*
 *     Generated by class-dump 3.3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <AppKit/NSView.h>

@class NSButton, NSCell, NSString;

@interface NSFrameView : NSView
{
    unsigned long long styleMask;
    NSString *_title;
    NSCell *titleCell;
    NSButton *closeButton;
    NSButton *zoomButton;
    NSButton *minimizeButton;
    BOOL resizeByIncrement;
    BOOL unused;
    unsigned char tabViewCount;
    struct CGSize resizeParameter;
    int shadowState;
}

+ (void)initialize;	// IMP=0x00020674
+ (void)initTitleCell:(id)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x003ddb44
+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x003dd734
+ (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x003dd75c
+ (struct CGSize)minFrameSizeForMinContentSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x003dd784
+ (struct CGSize)minContentSizeForMinFrameSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x003dd78a
+ (double)minFrameWidthWithTitle:(id)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x003dd790
+ (unsigned long long)_validateStyleMask:(unsigned long long)arg1;	// IMP=0x003dd79a
- (id)initWithFrame:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 owner:(id)arg3;	// IMP=0x00046bd4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x003ddd4e
- (void)dealloc;	// IMP=0x001a6f31
- (void)shapeWindow;	// IMP=0x003dde6f
- (void)tileAndSetWindowShape:(BOOL)arg1;	// IMP=0x0004d312
- (void)tile;	// IMP=0x003ddd38
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00102037
- (void)_drawFrameRects:(struct CGRect)arg1;	// IMP=0x003dd632
- (void)drawFrame:(struct CGRect)arg1;	// IMP=0x003dd638
- (void)drawThemeContentFill:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x00107343
- (void)drawWindowBackgroundRect:(struct CGRect)arg1;	// IMP=0x001ba427
- (void)drawWindowBackgroundRegion:(void *)arg1;	// IMP=0x00170863
- (double)contentAlpha;	// IMP=0x00086cdf
- (void)_windowChangedKeyState;	// IMP=0x000f3c71
- (void)_updateButtonState;	// IMP=0x003dd63e
- (BOOL)_isSheet;	// IMP=0x003dd644
- (BOOL)_isUtility;	// IMP=0x003dd64c
- (void)setShadowState:(long long)arg1;	// IMP=0x000b610c
- (long long)shadowState;	// IMP=0x00134866
- (BOOL)_canHaveToolbar;	// IMP=0x003dd654
- (BOOL)_toolbarIsInTransition;	// IMP=0x003dd65c
- (BOOL)_toolbarIsShown;	// IMP=0x003dd664
- (BOOL)_toolbarIsHidden;	// IMP=0x003dd66c
- (void)_showToolbarWithAnimation:(BOOL)arg1;	// IMP=0x003dd674
- (void)_hideToolbarWithAnimation:(BOOL)arg1;	// IMP=0x003dd67a
- (double)_distanceFromToolbarBaseToTitlebar;	// IMP=0x003dd680
- (long long)_shadowType;	// IMP=0x0013471e
- (unsigned long long)_shadowFlags;	// IMP=0x00134bac
- (void)_setShadowParameters;	// IMP=0x00134877
- (void)_drawFrameShadowAndFlushContext:(id)arg1;	// IMP=0x0013462a
- (void)setUpGState;	// IMP=0x000fd754
- (void)adjustHalftonePhase;	// IMP=0x000fd765
- (void)systemColorsDidChange:(id)arg1;	// IMP=0x003ddd22
- (id)frameColor;	// IMP=0x003ddbf7
- (id)contentFill;	// IMP=0x003ddf87
- (void)tabViewAdded;	// IMP=0x00211503
- (void)tabViewRemoved;	// IMP=0x003dd68a
- (id)title;	// IMP=0x00087d46
- (void)setTitle:(id)arg1;	// IMP=0x0008a9d2
- (id)titleCell;	// IMP=0x0008bb6c
- (void)initTitleCell:(id)arg1;	// IMP=0x0008bc12
- (void)setResizeIncrements:(struct CGSize)arg1;	// IMP=0x003de060
- (struct CGSize)resizeIncrements;	// IMP=0x0016d491
- (void)setAspectRatio:(struct CGSize)arg1;	// IMP=0x003dd6a2
- (struct CGSize)aspectRatio;	// IMP=0x003dd6c3
- (unsigned long long)styleMask;	// IMP=0x00047335
- (id)representedFilename;	// IMP=0x003ddb25
- (void)setRepresentedFilename:(id)arg1;	// IMP=0x003dd6f2
- (void)setDocumentEdited:(BOOL)arg1;	// IMP=0x003dd6f8
- (void)_setFrameNeedsDisplay:(BOOL)arg1;	// IMP=0x000f3bfe
- (BOOL)frameNeedsDisplay;	// IMP=0x003dd6fe
- (id)defaultTitleFont;	// IMP=0x0008bd0d
- (id)titleFont;	// IMP=0x003ddb14
- (struct CGRect)_maxTitlebarTitleRect;	// IMP=0x003dd706
- (struct CGRect)titlebarRect;	// IMP=0x003dde4d
- (void)_setUtilityWindow:(BOOL)arg1;	// IMP=0x003ddac7
- (void)_setNonactivatingPanel:(BOOL)arg1;	// IMP=0x003dda7d
- (void)setIsClosable:(BOOL)arg1;	// IMP=0x003dda30
- (void)setIsResizable:(BOOL)arg1;	// IMP=0x003dd9e3
- (void)setStyleMask:(unsigned long long)arg1;	// IMP=0x0028779c
- (id)closeButton;	// IMP=0x000897aa
- (id)minimizeButton;	// IMP=0x000897cc
- (id)zoomButton;	// IMP=0x000897bb
- (struct CGSize)miniaturizedSize;	// IMP=0x003dde23
- (void)_clearDragMargins;	// IMP=0x00088342
- (struct CGRect)_draggableFrame;	// IMP=0x003ddd88
- (void)_resetDragMargins;	// IMP=0x00087d6c
- (void)addSubview:(id)arg1;	// IMP=0x0004a5a0
- (void)setTitle:(id)arg1 andDefeatWrap:(BOOL)arg2;	// IMP=0x003dd9d2
- (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x000cd00a
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x0004e164
- (struct CGSize)minFrameSizeForMinContentSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;	// IMP=0x003dd968
- (struct CGRect)dragRectForFrameRect:(struct CGRect)arg1;	// IMP=0x003dd7a3
- (struct CGRect)contentRect;	// IMP=0x003ddd66
- (struct CGSize)minFrameSize;	// IMP=0x003dd7d1

@end

