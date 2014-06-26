//
//  PlayPauseOverlayView.m
//  SoundcloudPlayer
//
//  Created by Philip Brechler on 26.06.14.
//  Copyright (c) 2014 Call a Nerd. All rights reserved.
//

#import "PlayPauseOverlayView.h"
#import "StreamCloudStyles.h"
#import "SharedAudioPlayer.h"

@implementation PlayPauseOverlayView

- (id)initWithFrame:(NSRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code here.
    }
    return self;
}

- (void)drawRect:(NSRect)dirtyRect
{
    [super drawRect:dirtyRect];
    BOOL playing = NO;
    if ([SharedAudioPlayer sharedPlayer].positionInPlaylist == self.row && [SharedAudioPlayer sharedPlayer].audioPlayer.rate) {
        playing = YES;
    }
    [StreamCloudStyles drawPlayPauseOverlayWithFrame:self.frame playing:playing];
}

@end
