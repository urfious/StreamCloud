//
//  PlayPauseOverlayView.h
//  SoundcloudPlayer
//
//  Created by Philip Brechler on 26.06.14.
//  Copyright (c) 2014 Call a Nerd. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface PlayPauseOverlayView : NSView

@property (nonatomic) NSInteger row;
@property (nonatomic) id objectToShow;
@property (nonatomic) BOOL showLargeIcons;
@end
