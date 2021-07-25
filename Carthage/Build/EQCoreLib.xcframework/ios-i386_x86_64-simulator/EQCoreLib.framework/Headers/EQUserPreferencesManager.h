//
//  EQUserPreferencesManager.h
//  EQCoreLib
//
//  Created by David Rodrigues on 19/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQManagerInterface.h>
#import <EQCoreLib/EQBusinessService.h>
#import <EQCoreLib/EQBusinessServiceMode.h>

@protocol EQUserPreferencesManager <EQManagerInterface>

@required
/**
 *  This method enables or disables the data collection of the agent (OPTOUT USER mode).
 *
 *  @param enabled YES to enable the data collection, NO otherwise (OPTOUT USER mode)
 */
- (void)setReportDataEnabled:(BOOL)enabled;

/**
 *  This method returns the current state of the data collection.
 *
 *  @return YES if the data collection is enabled, NO otherwise
 */
- (BOOL)isReportDataEnabled;

/**
 *  This method enables or disables the location collection of the agent from the user settings
 *
 *  @param enabled YES if enabled, otherwise NO
 */
- (void)setLocationEnabled:(BOOL)enabled;

/**
 *  This method returns the current state of the location collection from the user settings.
 *
 *  @return YES if the location is enabled from the user settings, NO otherwise
 */
- (BOOL)isLocationEnabled;

/**
 *  This method enables or disables the location collection of the agent from the user settings
 *
 *  @param enabled     YES to enable the location collection for this service and this mode, NO to disable it
 *  @param service     The service to check for the location collection state
 *  @param serviceMode The service mode to check for the location collection state
 */
- (void)setLocationEnabled:(BOOL)enabled forService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode __attribute__((deprecated));

/**
 *  This method returns the current state of the location collection for this service and this mode.
 *
 *  @param service     The service to check for the location collection state
 *  @param serviceMode The service mode to check for the location collection state
 *
 *  @return YES if the location is enabled for this service and this mode, NO otherwise
 */
- (BOOL)isLocationEnabledForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode __attribute__((deprecated));

/**
 *  This method returns the current state of the WiFi mode
 *
 *  @return YES is the WiFi mode is enabled, NO otherwise
 */
- (BOOL)isWiFiModeEnabled;

/**
 *  This method returns the current state of the WiFi mode
 *
 *  @param defaultValue The default value
 *
 *  @return YES is the WiFi mode is enabled, NO otherwise
 */

- (BOOL)isWiFiModeEnabledWithDefaultValue:(BOOL)defaultValue;

/**
 *  This method enables or disables the WiFi mode on the agent (data are sent only when the device is conneted on WiFi)
 *
 *  @param enabled YES to enable the WiFi mde, NO to disable it
 */
- (void)setWiFiModeEnabled:(BOOL)enabled;

/**
 *  Returns if the messages is enabled or not
 *
 *  @return YES if enabled, NO otherwise
 */
- (BOOL)isMessagesEnabled;

/**
 *  This method enables or disables the messages on the agent
 *
 *  @param enabled YES to enable the messages, NO to disable it
 */
- (void)setMessagesEnabled:(BOOL)enabled;

/**
 *  Return if surveys are enabled or not
 *
 *  @return YES if enabled, NO otherwise
 */
- (BOOL)isSurveyEnabled;

/**
 *  This method enables or disables the survey on the agent
 *
 *  @param enabled YES to enable the survey, NO to disable it
 */
- (void)setSurveyEnabled:(BOOL)enabled;

/**
 *  Returns a Boolean value that indicates if tests synchronization is enabled or not.
 *
 *  @return YES if tests synchronization is enabled, NO otherwise
 */
- (BOOL)isTestsSynchronizationEnabled;

/**
 *  Enable or disable tests synchronization
 *
 *  @param enabled YES to enable tests synchronization, NO otherwise
 */
- (void)setTestsSynchronizationEnabled:(BOOL)enabled;



@end
