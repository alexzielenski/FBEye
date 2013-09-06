//
//  FBAppDelegate.h
//  FB Eye
//
//  Created by Alex Zielenski on 9/4/13.
//  Copyright (c) 2013 Alex Zielenski. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface FBAppDelegate : NSObject <NSApplicationDelegate>

// Checkboxes
@property (weak) IBOutlet NSButton *startingSelectionToggle;
@property (weak) IBOutlet NSButton *endingSelectionToggle;
@property (weak) IBOutlet NSButton *inactiveStartingSelectionToggle;
@property (weak) IBOutlet NSButton *inactiveEndingSelectionToggle;
@property (weak) IBOutlet NSButton *sourceListBackgroundToggle;
@property (weak) IBOutlet NSButton *activeWindowTitleToggle;
@property (weak) IBOutlet NSButton *inactiveWindowTitleToggle;

// Color Wells
@property (weak) IBOutlet NSColorWell *startingSelectionColor;
@property (weak) IBOutlet NSColorWell *endingSelectionColor;
@property (weak) IBOutlet NSColorWell *inactiveStartingSelectionColor;
@property (weak) IBOutlet NSColorWell *inactiveEndingSelectionColor;
@property (weak) IBOutlet NSColorWell *sourceListBackgroundColor;
@property (weak) IBOutlet NSColorWell *activeWindowTitleColor;
@property (weak) IBOutlet NSColorWell *inactiveWindowTitleColor;

@property (assign) IBOutlet NSWindow *window;

- (IBAction)reset:(id)sender;
- (IBAction)save:(id)sender;

@end
