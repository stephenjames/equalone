//
//  EQBackgroundManager.h
//  EQCoreLib
//
//  Created by David Rodrigues on 20/03/2015.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <EQCoreLib/EQManagerInterface.h>
#import <EQCoreLib/EQBackgroundServiceDelegate.h>

#define EQConfigurationServiceDidChangeNotification                     @"EQConfigurationDidChangeNotification"
#define EQConfigurationServiceScenarioDidChangeNotification             @"EQConfigurationScenarioDidChangeNotification"
#define EQConfigurationServiceScenarioDidChangeInBackgroundNotification @"EQConfigurationScenarioDidChangeInBackgroundNotification"

@protocol EQBackgroundManager <EQManagerInterface>

- (void)setDelegate:(id<EQBackgroundServiceDelegate>)delegate;

/**
 *  Apply the configuration downloaded by the background fetch.
 */
- (void)applyConfiguration;

@end
