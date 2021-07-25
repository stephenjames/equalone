//
//  EQPauseScenarioDelegate.h
//  EQCoreLib
//
//  Created by David RODRIGUES on 26/04/16.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <EQCoreLib/EQScenarioDelegate.h>

@class EQPauseStepConfiguration;

@protocol EQPauseScenarioDelegate <EQScenarioDelegate>

@optional

/**
 *  Called regularly to track the progression of the pause, with the remaining time and the total duration
 *
 *  @param step     The pause step configuration
 *  @param time     The remaining time
 *  @param duration The total duration
 */
- (void)step:(EQPauseStepConfiguration * _Nonnull)step didRemainTime:(NSTimeInterval)time duration:(NSTimeInterval)duration;

@end
