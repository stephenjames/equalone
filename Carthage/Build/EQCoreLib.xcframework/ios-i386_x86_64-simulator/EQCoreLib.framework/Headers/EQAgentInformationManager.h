//
//  EQAgentInformationManager.h
//  EQCoreLib
//
//  Created by David Rodrigues on 19/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQManagerInterface.h>
#import <EQCoreLib/EQBusinessService.h>
#import <EQCoreLib/EQBusinessServiceMode.h>
#import <EQCoreLib/EQUpdateConfigDelegate.h>
#import <EQCoreLib/EQCouponDelegate.h>
#import <EQCoreLib/EQLiveData.h>
#import <EQCoreLib/EQAgentUpdateAvailableDelegate.h>
#import <EQCoreLib/EQDeviceDelegate.h>

#import <EQCoreLib/EQSchedulingStatus.h>
#import <EQCoreLib/EQSpoolerServiceProtocol.h>
#import <EQCoreLib/EQSchedulingDelegate.h>
#import <EQCoreLib/EQClusterStatus.h>
#import <EQCoreLib/EQIdleDataCollect.h>

@protocol EQAgentInformationManager <EQManagerInterface>

@required
/**
 *  It must be the same URL as defined in the default_server file.
 *
 *  @return The current server URL attached
 */
- (NSURL *)serverUrl;

/**
 *  It's the URL used to generate the DQA ID. 
 *  This value will remain the same since the DQA has been generated.
 *
 *  @return The license URL.
 */
- (NSURL *)licenseUrl;

/**
 *  The license's DQA ID, a unique identifier
 *
 *  @return The DQA identifier
 */
- (NSString *) dqaId;

/**
 *  The anonymous mode status
 *
 *  @return YES if the anonymous mode is enabled, else NO
 */
- (BOOL) isAnonymous;

/**
 *  The installation folder
 *
 *  @return The installation folder
 */
- (NSString *) folder;

/**
 *  Get the status for data collect in idle mode
 *
 *  @return EQIdleDataCollect enum values
 */
- (EQIdleDataCollect) dataCollectInIdleMode;

/**
 *  Check if the license is valid for the current server
 *
 *  @param server The server's URL
 *
 *  @return YES if the license is valid, else NO
 */
- (BOOL)isLicenseValidForServer:(NSURL *)server;

/**
 *
 *  @param service     The service to get
 *  @param serviceMode The service mode to get
 *
 *  @return YES is service is activated for the service and the mode, NO otherwise
 */
- (BOOL)isServiceActive:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode;

/**
 *  @return The agent version in the format 'X.X.X.X'
 */
- (NSString *)agentVersion;

/**
 *  This timestamp represents the date of the last modification of the configuration from the server.
 *
 *  @return The unix timestamp of the configuration provided by the server, return -1 if no configuration is available.
 */
- (long)configurationTimestamp;

/**
 *  Update the configuration of the agent from the server
 *
 *  @param delegate The delegate when the update has finished
 */
- (void)updateConfigWithDelegate:(id<EQUpdateConfigDelegate>)delegate;

/**
 *  Force get a license on app care
 *
 *  @param delegate The delegate when the update has finished
 */
- (void)forceLicenseOnAppCare:(id<EQUpdateConfigDelegate>)delegate;

/**
 *  The global location status from the server configuration
 *
 *  @return YES if the global location status from the server configuration is enabled, NO otherwise
 */
- (BOOL)isLocationEnabledFromGlobalConfiguration;

/**
 *
 *  @param service     The service to get
 *  @param serviceMode The service mode to get
 *
 *  @return YES if the location is enabled from the server configuration for the corresponding service and mode, NO otherwise
 */
- (BOOL)isLocationEnabledFromGlobalConfigurationForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode;

/**
 *  Return the SMSC Gateway number for the MSISDN Enrichment
 *
 *  @return The SMSC Gateway number
 */
- (NSString *)SMSCGatewayNumber;

/**
 *  Return the live conditions of the agent
 *
 *  @param conditions A NSArray of EQLiveDataCondition
 *
 *  @return A EQLiveData filled with live data
 */
- (EQLiveData *)liveConditions:(NSArray *)conditions;

/**
 *  Submit a coupon to the server
 *
 *  @param coupon   The coupon tag
 *  @param delegate The delegate
 */
- (void)submitCoupon:(NSString *)coupon delegate:(id<EQCouponDelegate>)delegate;

/**
 *  Spool KPI
 *
 *  @param delegate The delegate
 */
- (void)sendDataSpoolerWithDelegate:(id<EQSpoolerServiceProtocol>)delegate;

/**
 *  Remove all datas of the agent synchronously
 */
- (BOOL)resetData;

/**
 *  Return YES or NO depending on the idle mode
 *
 *  @return YES if in license is active, NO otherwise (IDLE mode)
 */
- (BOOL)isLicenseActive;

/**
 *  Return YES if the TimeBasedQuestionnaire is enabled
 *
 *  @return YES if the TBQ is enabled, NO otherwise
 */
- (BOOL)isTimeBasedQuestionnaireEnabled __deprecated_msg("Use isEventQuestionnaireEnabled instead.");

/**
 Returns whether the EventQuestionnaire is enabled or not

 @return YES if the EventQuestionnaire is enabled, NO otherwise
 */
- (BOOL)isEventQuestionnaireEnabled;

/**
 *  Register a delegate in order to be informed if there is an update available for the agent
 *
 *  @param delegate The delegate
 */
- (void)setAgentUpdateAvailableDelegate:(id<EQAgentUpdateAvailableDelegate>)delegate;

/**
 *  Return the maximum disk usage percentage for the spooler.
 *
 *  @return The maximum percentage (from 0.0 to 100.0)
 */
- (double)dataSpoolerMaximumPercentageLimitation;

/**
 *  Return the maximum days on the disk for files in the spooler.
 *
 *  @return The maximum days
 */
- (NSUInteger)dataSpoolerMaximumDaysLimitation;

/**
 *  Return the maximum disk usage size for the spooler.
 *
 *  @return The maximum size (in bytes)
 */
- (NSUInteger)dataSpoolerMaximumSizeLimitation;

/**
 *  Set the delegate to the device information provider
 *
 *  @param delegate The delegate
 */
- (void)setDeviceDelegate:(id<EQDeviceDelegate>)delegate;

/**
 * Return the current scenario identifier
 *
 * @return The current scenario identifier
 */
- (NSInteger)configurationId;

/**
 *  Set the delegate for scheduling changes
 *
 *  @param delegate The delegate
 */
- (void)setSchedulingDelegate:(id<EQSchedulingDelegate>)delegate;

/**
 *  Returns the scheduling protection status
 *
 *  @return YES if the scheduling proctection is active, NO otherwise (normal or unknown mode)
 */
- (BOOL)isSchedulingProtection;

/**
 Set the cluster ID manually. Only works if in equalone_config.json, the value for "multiapp" is 1.

 @param clusterID The cluster ID to set
 */
- (void)setClusterID:(NSString *)clusterID;

/**
 Used to retrieve the Cluster ID

 @return The Cluster ID
 */
- (NSString *)clusterID;

/**
 Retrieves the status of the cluster, directly from the configuration.

 @return The cluster status (Master or Slave)
 */
- (EQClusterStatus)clusterStatus;

@end
