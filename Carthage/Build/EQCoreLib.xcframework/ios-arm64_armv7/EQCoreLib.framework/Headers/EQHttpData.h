//
//  EQHttpData.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQData.h>
#import <EQCoreLib/EQDirection.h>
#import <EQCoreLib/EQEndId.h>

@protocol EQHttpData <EQData>

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
 *  The abstract size of the file transferred in KBytes (TH111)
 *
 *  @return The abstract size of the file transferred in KBytes (TH111)
 */
- (NSInteger)size;

/**
 *  The number of sockets used for the transfer from the config file (TH116)
 *
 *  @return The number of sockets used for the transfer from the config file (TH116)
 */
- (NSInteger)nbSocket;

/**
 *  <#Description#>
 *
 *  @return <#return value description#>
 */
- (NSTimeInterval)activityTimeA;

/**
 *  <#Description#>
 *
 *  @return <#return value description#>
 */
- (NSTimeInterval)activityTimeB;

/**
 *  <#Description#>
 *
 *  @return <#return value description#>
 */
- (double)minimumThroughput;

/**
 *  <#Description#>
 *
 *  @return <#return value description#>
 */
- (double)averageThroughput;

/**
 *  <#Description#>
 *
 *  @return <#return value description#>
 */
- (double)maximumThroughput;

/**
 *  <#Description#>
 *
 *  @return <#return value description#>
 */
- (NSTimeInterval)minimumLatency;

/**
 *  <#Description#>
 *
 *  @return <#return value description#>
 */
- (NSTimeInterval)averageLatency;

/**
 *  <#Description#>
 *
 *  @return <#return value description#>
 */
- (NSTimeInterval)maximumLatency;

@end
