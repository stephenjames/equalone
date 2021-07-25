//
//  EQSpoolerScenarioDelegate.h
//  EQCoreLib
//
//  Created by David RODRIGUES on 20/05/16.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <EQCoreLib/EQScenarioDelegate.h>

@class EQSpoolerStepConfiguration;

@protocol EQSpoolerScenarioDelegate <EQScenarioDelegate>

@optional

/**
 *  Called before sending KPIs saved in the spooler.
 *
 *  @param step The spooler step in the configuration
 */
- (void)stepWillSendCollectedData:(EQSpoolerStepConfiguration * _Nonnull)step ;

/**
 *  Called when the send task is finished, whether successfully or not.
 *
 *  @param step The spooler step in the configuration
 */
- (void)stepDidSendCollectedData:(EQSpoolerStepConfiguration * _Nonnull)step;

@end
