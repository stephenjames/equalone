//
//  EQShooterData.h
//  EQCoreLib
//
//  Created by David RODRIGUES (V3D) on 18/10/2016.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <EQCoreLib/EQData.h>
#import <EQCoreLib/EQDirection.h>
#import <EQCoreLib/EQEndId.h>
#import <EQCoreLib/EQShooterType.h>
#import <EQCoreLib/EQMScoreModuleType.h>

@protocol EQShooterData <EQData>

@required

/**
 *  Direction of the HTTP data transfer (TH101)
 *
 *  @return Direction of the HTTP data transfer (TH101)
 */
- (EQDirection)direction;

/**
 *  Termination code for the HTTP data transfer event (TH201)
 *
 *  @return Termination code for the HTTP data transfer event (TH201)
 */
- (EQEndId)terminationCode;

/**
 *  Session time, duration of the HTTP data transfer event (TH013)
 *
 *  @return Session time, duration of the HTTP data transfer event (TH013)
 */
- (NSTimeInterval)sessionTime;

/**
 *  The actual size of transferred file in KBytes (TH102)
 *
 *  @return The actual size of transferred file in KBytes (TH102)
 */
- (unsigned long long)volume;

/**
 *  long url The file URL (TH112)
 *
 *  @return long url The file URL (TH112)
 */
- (NSURL *)url;

/**
 *  The number of sockets used for the transfer from the config file (TH116)
 *
 *  @return The number of sockets used for the transfer from the config file (TH116)
 */
- (NSInteger)nbSocket;

/**
 *  The maximum throughput computed by mScore
 *
 *  @return The maximum throughput (in Kbps)
 */
- (double)maximumThroughput;

/**
 *  The average throughput computed by mScore
 *
 *  @return The average throughput (in Kbps)
 */
- (double)averageThroughput;

/**
 The average jitter computed by mScore

 @return The average jitter (in ms)
 */
- (NSInteger)averageJitter;

/**
 The percentage of packet loss during the test

 @return The percentage of packet loss (between 0 and 1)
 */
- (double)packetLoss;

/**
 Time elapsed during the transfer

 @return The time elapsed
 */
- (NSTimeInterval)timeElapsed;

/**
 The URL to open if you want charts from mScore server

 @return The results URL
 */
- (NSURL *)resultsURL;

/**
 The shooter type of the test

 @return The shooter type
 */
- (EQShooterType)type;


/**
 The module type of the test

 @return The module type
 */
- (EQMScoreModuleType)module;

/**
 Provides the mean opinion score of the test (for mScore scoring tests only)

 @return The MOS value (between 0.0 & 5.0), -1 if not available
 */
- (double)meanOpinionScore;

/**
 Provides the minimum RTT of the test
 
 @return The minimum RTT value
 */
- (NSInteger)minimumRtt;

/**
 Provides the root cause analysis 1
 id: 100,
 label: "Device"
 
 id: 200,
 label: "Lastmile Congestion"
 
 id: 300,
 label: "Core Backhaul"
 
 id: 500,
 label: "Server"
 
 id: 900,
 label: "Multiple"
 
 @return The root cause analysis value
 */
- (NSString *)rootCauseAnalysis1;

@end
