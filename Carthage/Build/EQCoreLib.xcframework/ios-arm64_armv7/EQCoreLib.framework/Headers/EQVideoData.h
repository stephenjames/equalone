//
//  EQVideoData.h
//  EQCoreLib
//
//  Created by David Rodrigues on 05/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQData.h>
#import <EQCoreLib/EQEndId.h>
#import <EQCoreLib/YTPlayerView.h>

@protocol EQVideoData <EQData>

@required

/**
 *  Termination code for the video streaming event (VS201)
 *
 *  @return Termination code for the video streaming event (VS201)
 */
- (EQEndId)terminationCode;

/**
 *  Time to access the video service provider (VS002)
 *
 *  @return Time to access the video service provider (VS002)
 */
- (NSTimeInterval)serviceAccessTime;

/**
 *  Initial buffering time, time between the request for the video (VS003)
 *
 *  @return Initial buffering time, time between the request for the video (VS003)
 */
- (NSTimeInterval)initBufferingTime;

/**
 *  Download time after initial buffering. (VS004)
 *
 *  @return Download time after initial buffering. (VS004)
 */
- (NSTimeInterval)reproductionTime;

/**
 *  Total duration of the video streaming session, inludes buffering time, reproduction time and tiredown time.
 *
 *  @return Total duration of the video streaming session, inludes buffering time, reproduction time and tiredown time.
 */
- (NSTimeInterval)sessionTime;

/**
 *  Total duration of rebuffering. The initial buffering is not counted. (VS007)
 *
 *  @return Total duration of rebuffering. The initial buffering is not counted. (VS007)
 */
- (NSTimeInterval)rebufferingTime;

/**
 *  Number of times the video is stopped during playback for rebuffering. The initial buffering is not counted. (VS102)
 *
 *  @return Number of times the video is stopped during playback for rebuffering. The initial buffering is not counted. (VS102)
 */
- (NSInteger)bufferingCount;

/**
 *  Volume transferred during the transfer time in KBytes (VS101)
 *
 *  @return Volume transferred during the transfer time in KBytes (VS101)
 */
- (unsigned long long)volume;

/**
 *  ID of the video (VS119)
 *
 *  @return ID of the video (VS119)
 */
- (NSString *)videoId;

/**
 *  Provider of the video (VS117)
 *
 *  @return Provider of the video (VS117)
 */
- (NSString *)videoProvider;

/**
 *  Theoretical duration of the video (VS120)
 *
 *  @return Theoretical duration of the video (VS120)
 */
- (NSTimeInterval)videoDuration;

/**
 *  Transfer protocol for the video (VS118)
 *
 *  @return Transfer protocol for the video (VS118)
 */
- (NSString *)videoProtocol;


/**
 Throughput observed during the buffering phase.

 @return The buffering throughput (in Kbps), or -1 if not available
 */
- (double)bufferingThroughput;

/**
 Throughput observed during the playback phase.

 @return The playback throughput (in Kbps), or -1 if not available
 */
- (double)playbackThroughput;


/**
 Last quality observed during the playback video.

 @return The quality at the end of the video
 */
- (YTPlaybackQuality)quality;

@end
