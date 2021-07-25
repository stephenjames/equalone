//
//  EQVideoStreamingScenarioDelegate.h
//  EQCoreLib
//
//  Created by David RODRIGUES on 26/04/16.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <EQCoreLib/EQScenarioDelegate.h>
#import <EQCoreLib/YTPlayerView.h>

@class EQVideoStepConfiguration;

@protocol EQVideoStreamingScenarioDelegate <EQScenarioDelegate>

@optional

/**
 *  Called when the video start loading
 *
 *  @param step The video step configuration
 */
- (void)stepDidStartLoading:(EQVideoStepConfiguration * _Nonnull)step;

/**
 *  Called when the video changed from a buffering state to another, with the the buffering duration
 *
 *  @param step      The video step configuration
 *  @param buffering The buffering state
 *  @param duration  The total buffering duration
 */
- (void)step:(EQVideoStepConfiguration * _Nonnull)step didChangeBufferingState:(BOOL)buffering duration:(NSTimeInterval)duration;


/**
 Called when the quality of the video changes

 @param step    The video step configuraiton
 @param quality The quality
 */
- (void)step:(EQVideoStepConfiguration * _Nonnull)step didChangePlaybackQuality:(YTPlaybackQuality)quality;

/**
 *  Called regularly when the play time change, with the total duration
 *
 *  @param step     The video step configuration
 *  @param time     The current play time
 *  @param duration The total duration of the video
 */
- (void)step:(EQVideoStepConfiguration * _Nonnull)step didPlayTime:(NSTimeInterval)time duration:(NSTimeInterval)duration;

/**
 *  Called regularly during the transfer to track the progression of the video, given the transfer size made during the duration.
 *  With this information, you can calculate instant throughput.
 *
 *  @param step     The video step configuration
 *  @param size     The downloaded size
 *  @param duration The download duration
 */
- (void)step:(EQVideoStepConfiguration * _Nonnull)step didDownloadSize:(unsigned long long)size duration:(NSTimeInterval)duration;

@end
