//
//  EQHttpScenarioDelegate.h
//  EQCoreLib
//
//  Created by David RODRIGUES on 26/04/16.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <EQCoreLib/EQScenarioDelegate.h>

@class EQHttpStepConfiguration;
@class EQHttpStepDetailConfiguration;

@protocol EQHttpScenarioDelegate <EQScenarioDelegate>

@optional

/**
 *  Called when the scenario selected the step depending the technology in which your device is
 *
 *  @param step              The base step configuration
 *  @param stepDetail        The detail step configuration
 *  @param networkTechnology The technology of your device
 */
- (void)step:(EQHttpStepConfiguration * _Nonnull)step didSelectStepDetailsConfiguration:(EQHttpStepDetailConfiguration * _Nonnull)stepDetail networkTechnology:(EQNetworkTechnology)networkTechnology;

/**
 *  Called when the transfer of the given size will start
 *
 *  @param step The detail step configuration
 *  @param size The size of the transfer
 */
- (void)step:(EQHttpStepDetailConfiguration * _Nonnull)step willStartTransferWithSize:(unsigned long long)size;

/**
 *  Called regularly during the transfer to track the progression of the transfer, given the transfer size made during the duration.
 *  With this information, you can calculate instant throughput.
 *
 *  @param step     The detail step configuration
 *  @param size     The size transfered
 *  @param duration The duration of the transfer
 *  @param percent  The progression percentage of the step
 */
- (void)step:(EQHttpStepDetailConfiguration * _Nonnull)step didTransferSize:(unsigned long long)size duration:(NSTimeInterval)duration percent:(double)percent;

/**
 *  Called when a latency test is done
 *
 *  @param step    The detail step configuration
 *  @param latency The result of the latency test
 */
- (void)step:(EQHttpStepDetailConfiguration * _Nonnull)step didUpdateLatency:(NSTimeInterval)latency;

/**
 *  Called when the transfer finished, whether it is successful or not.
 *
 *  @param step The detail step configuration
 */
- (void)stepDidFinishTransfer:(EQHttpStepDetailConfiguration * _Nonnull)step;

@end
