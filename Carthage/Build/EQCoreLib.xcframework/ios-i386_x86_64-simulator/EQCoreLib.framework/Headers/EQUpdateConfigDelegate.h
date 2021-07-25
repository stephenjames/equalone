//
//  EQUpdateConfigDelegate.h
//  EQCoreLib
//
//  Created by David Rodrigues on 19/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQError.h>

@protocol EQUpdateConfigDelegate <NSObject>

@optional

/**
 *  Callback invoked when the configuration has been updated
 *
 *  @param configurationTimestamp The configuration timestamp
 */
- (void)didUpdateConfig:(long)configurationTimestamp;

/**
 *  Callback invoked when the agent failed to update the configuration
 *
 *  @param error The error
 */
- (void)didFailToUpdate:(EQError *)error;

/**
 *  Callback invoked when the agent already has the last configuration
 */
- (void)alreadyUpToDate;

@optional

/**
 *  Callback invoked when the configuration has been loaded
 *
 *  @param backgroundModeHasChanged Flag to indicate if background has changed
 *  @return YES if the configuration was applied, NO otherwise
 */
- (BOOL)didLoadConfigurationWithBackgroundModeHasChanged:(BOOL)backgroundModeHasChanged;

@end
