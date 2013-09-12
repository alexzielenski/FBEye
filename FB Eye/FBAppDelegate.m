//
//  FBAppDelegate.m
//  FB Eye
//
//  Created by Alex Zielenski on 9/4/13.
//  Copyright (c) 2013 Alex Zielenski. All rights reserved.
//

#import "FBAppDelegate.h"
#import "Defines.h"
#import <objc/runtime.h>

@interface FBAppDelegate ()
- (void)saveColorFromControl:(NSColorWell *)control forKey:(NSString *)key withToggle:(NSButton *)toggle;
- (void)syncColorFromKey:(NSString *)key withControl:(NSColorWell *)control toggle:(NSButton *)toggle;
- (void)synchronizeWithDefaults;
@end

@implementation FBAppDelegate
- (void)applicationDidFinishLaunching:(NSNotification *)notification {
    [self synchronizeWithDefaults];
}

- (IBAction)reset:(id)sender {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    [defaults removePersistentDomainForName:NSBundle.mainBundle.bundleIdentifier];
    [self synchronizeWithDefaults];
}
- (IBAction)save:(id)sender {
    [self saveColorFromControl:self.startingSelectionColor forKey:StartingSelectionKey withToggle:self.startingSelectionToggle];
    [self saveColorFromControl:self.endingSelectionColor forKey:EndingSelectionKey withToggle:self.endingSelectionToggle];
    [self saveColorFromControl:self.inactiveStartingSelectionColor forKey:InactiveStartingSelectionKey withToggle:self.inactiveStartingSelectionToggle];
    [self saveColorFromControl:self.inactiveEndingSelectionColor forKey:InactiveEndingSelectionKey withToggle:self.inactiveEndingSelectionToggle];
    [self saveColorFromControl:self.sourceListBackgroundColor forKey:SourceListKey withToggle:self.sourceListBackgroundToggle];
    [self saveColorFromControl:self.activeWindowTitleColor forKey:ActiveWindowKey withToggle:self.activeWindowTitleToggle];
    [self saveColorFromControl:self.inactiveWindowTitleColor forKey:InactiveWindowKey withToggle:self.inactiveWindowTitleToggle];
    
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)saveColorFromControl:(NSColorWell *)control forKey:(NSString *)key withToggle:(NSButton *)toggle {
    if (toggle.state == NSOnState)
        [[NSUserDefaults standardUserDefaults] setObject:dictionaryFromColor(control.color) forKey:key];
    else
        [[NSUserDefaults standardUserDefaults] removeObjectForKey:key];
}

- (void)synchronizeWithDefaults {
    [self syncColorFromKey:StartingSelectionKey withControl:self.startingSelectionColor toggle:self.startingSelectionToggle];
    [self syncColorFromKey:EndingSelectionKey withControl:self.endingSelectionColor toggle:self.endingSelectionToggle];
    [self syncColorFromKey:InactiveStartingSelectionKey withControl:self.inactiveStartingSelectionColor toggle:self.inactiveStartingSelectionToggle];
    [self syncColorFromKey:InactiveEndingSelectionKey withControl:self.inactiveEndingSelectionColor toggle:self.inactiveEndingSelectionToggle];
    [self syncColorFromKey:SourceListKey withControl:self.sourceListBackgroundColor toggle:self.sourceListBackgroundToggle];
    [self syncColorFromKey:ActiveWindowKey withControl:self.activeWindowTitleColor toggle:self.activeWindowTitleToggle];
    [self syncColorFromKey:InactiveWindowKey withControl:self.inactiveWindowTitleColor toggle:self.inactiveWindowTitleToggle];
}

- (void)syncColorFromKey:(NSString *)key withControl:(NSColorWell *)control toggle:(NSButton *)toggle {
    NSDictionary *dict = [[NSUserDefaults standardUserDefaults] objectForKey:key];
    NSColor *color = colorFromDictionary(dict);
    toggle.state   = (dict && color) ? NSOnState : NSOffState;
    control.color  = color ? color : [NSColor clearColor];
}

- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)theApplication {
    return YES;
}

@end
