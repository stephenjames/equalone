//
//  EQAgentUpdateAvailableDelegate.h
//  EQCoreLib
//
//  Created by David Rodrigues on 19/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EQAgentUpdateNotificationFactory;

@protocol EQAgentUpdateAvailableDelegate <NSObject>

@required
/**
 *  Callback invoked when a new version of the agent is available
 *
 *  @param link The link of the new agent 
 */
- (void)newAgentUpdateAvailable:(NSURL *)link;

@end