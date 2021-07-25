//
//  EQMScoreScenarioDelegate.h
//  EQCoreLib
//
//  Created by David RODRIGUES (V3D) on 16/09/16.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <EQCoreLib/EQScenarioDelegate.h>

@class EQMScoreStepConfiguration;
@class EQError;

@protocol EQMScoreScenarioDelegate <EQScenarioDelegate>

@optional

/**
 Called when the best mScore server selection will start

 @param step The step configuration
 */
- (void)mScoreStepWillSelectServer:(EQMScoreStepConfiguration * _Nonnull)step;

/**
 Called when the best mScore server has been selected

 @param step The step configuration
 @param server The selected server
 */
- (void)mScoreStep:(EQMScoreStepConfiguration * _Nonnull)step didSelectServer:(NSURL *_Nullable)server error:(EQError * _Nullable)error;

/**
 Called before sockets start to connect

 @param step    The step configuration
 @param sockets The number of sockets starting connection
 */
- (void)mScoreStep:(EQMScoreStepConfiguration * _Nonnull)step willStartConnectingSockets:(NSInteger)sockets;

/**
 Called when a socket is connected

 @param step             The step configuration
 @param socketIdentifier The socket identifier
 */
- (void)mScoreStep:(EQMScoreStepConfiguration * _Nonnull)step didConnectSocket:(NSInteger)socketIdentifier;

/**
 Called when the transfer of the given size will start

 @param step The step configuration
 @param size The size of the transfer
 */
- (void)mScoreStep:(EQMScoreStepConfiguration * _Nonnull)step willStartTransferWithSize:(NSUInteger)size;

/**
 Called regularly during the transfer to track the progression of the transfer, given the transfer size made during the duration.
 With this information, you can calculate instant throughput.

 @param step     The step configuration
 @param size     The size transfered
 @param duration The duration of the transfer
 @param percent  The progression percentage of the step
 */
- (void)mScoreStep:(EQMScoreStepConfiguration * _Nonnull)step didTransferSize:(unsigned long long)size duration:(NSTimeInterval)duration percent:(double)percent;


/**
 Called when transfer is finished.

 @param step The step configuration
 */
- (void)mScoreStepDidFinishTransfer:(EQMScoreStepConfiguration * _Nonnull)step;

@end
