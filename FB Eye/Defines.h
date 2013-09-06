//
//  Defines.h
//  FB Eye
//
//  Created by Alex Zielenski on 9/5/13.
//  Copyright (c) 2013 Alex Zielenski. All rights reserved.
//

#ifndef FB_Eye_Defines_h
#define FB_Eye_Defines_h

#define SourceListKey @"SourceListBackgroundColor"
#define ActiveWindowKey @"ActiveWindowTitleColor"
#define InactiveWindowKey @"InactiveWindowTitleColor"
#define StartingSelectionKey @"StartingSelectionGradient"
#define EndingSelectionKey @"EndingSelectionGradient"
#define SelectionAngleKey @"SelectionAngle"
#define InactiveStartingSelectionKey @"InactiveStartingSelectionGradient"
#define InactiveEndingSelectionKey @"InactiveEndingSelectionGradient"

static inline NSColor *colorFromDictionary(NSDictionary *color) {
    if (!color)
        return nil;
    
    return [NSColor colorWithCalibratedHue:[color[@"h"] doubleValue]
                                saturation:[color[@"s"] doubleValue]
                                brightness:[color[@"l"] doubleValue]
                                     alpha:[color[@"a"] doubleValue]];
}

static inline NSDictionary *dictionaryFromColor(NSColor *color) {
    if (!color)
        return @{};
    
    return @{ @"h": @(color.hueComponent),
              @"s": @(color.saturationComponent),
              @"l": @(color.brightnessComponent),
              @"a": @(color.alphaComponent)};
}

#endif
