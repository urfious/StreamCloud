//
//  StreamCloudStyles.h
//  StreamCloud
//
//  Created by Peter Amende on 26.06.14.
//  Copyright (c) 2014 Call a Nerd. All rights reserved.
//
//  Generated by PaintCode (www.paintcodeapp.com)
//

#import <Foundation/Foundation.h>


@interface StreamCloudStyles : NSObject

// Colors
+ (NSColor*)orangeLight;
+ (NSColor*)orangeMedium;
+ (NSColor*)orangeDark;
+ (NSColor*)grayMedium;
+ (NSColor*)grayDark;
+ (NSColor*)grayLight;
+ (NSColor*)seperatorColor;
+ (NSColor*)artistLabelColor;
+ (NSColor*)durationLabelColor;

// Gradients
+ (NSGradient*)orangeGradient;

// Drawing Methods
+ (void)drawPlayPauseButtonWithFrame: (NSRect)frame playing: (BOOL)playing;
+ (void)drawNextButtonWithFrame: (NSRect)frame;
+ (void)drawPreviousButtonWithFrame: (NSRect)frame;
+ (void)drawShuffleButtonWithFrame: (NSRect)frame active: (BOOL)active;
+ (void)drawRepeatButtonWithFrame: (NSRect)frame repeatMode: (CGFloat)repeatMode;
+ (void)drawSoundCloudLogoWithFrame: (NSRect)frame;
+ (void)drawPlayingIndicatorWithFrame: (NSRect)frame;
+ (void)drawSeperatorViewWithFrame: (NSRect)frame;
+ (void)drawProgressIndicatorViewWithPercentShown: (CGFloat)percentShown;
+ (void)drawVolumeSettingsWithFrame: (NSRect)frame volumeToShow: (CGFloat)volumeToShow;
+ (void)drawLoginButtonWithFrame: (NSRect)frame;
+ (void)drawCanvas1;
+ (void)drawPlayPauseOverlayWithFrame: (NSRect)frame playing: (BOOL)playing;

// Generated Images
+ (NSImage*)imageOfPlayPauseButtonWithFrame: (NSRect)frame playing: (BOOL)playing;
+ (NSImage*)imageOfShuffleButtonWithFrame: (NSRect)frame active: (BOOL)active;
+ (NSImage*)imageOfRepeatButtonWithFrame: (NSRect)frame repeatMode: (CGFloat)repeatMode;
+ (NSImage*)imageOfSoundCloudLogoWithFrame: (NSRect)frame;
+ (NSImage*)imageOfPlayingIndicatorWithFrame: (NSRect)frame;
+ (NSImage*)imageOfMenuBarIconWithActive: (BOOL)active;
+ (NSImage*)imageOfImageOverlayGradientViewWithFrame: (NSRect)frame;

@end
