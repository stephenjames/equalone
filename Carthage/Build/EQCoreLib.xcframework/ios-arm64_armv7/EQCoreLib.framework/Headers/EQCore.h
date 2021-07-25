//
//  EQCore.h
//  EQCoreLib
//
//  Created by David Rodrigues on 19/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQManagerInterface.h>
#import <EQCoreLib/EQAgentInformationManager.h>
#import <EQCoreLib/EQUserPreferencesManager.h>
#import <EQCoreLib/EQScenarioManager.h>
#import <EQCoreLib/EQSurveyManager.h>
#import <EQCoreLib/EQTicketManager.h>
#import <EQCoreLib/EQDataManager.h>
#import <EQCoreLib/EQBackgroundManager.h>
#import <EQCoreLib/EQBootManager.h>
#import <EQCoreLib/EQLogManager.h>
#import <EQCoreLib/EQCoreStatus.h>
#import <EQCoreLib/EQDQAIDGenerationDelegate.h>
#import <EQCoreLib/EQGpsProxy.h>
#import <EQCoreLib/EQCube.h>

#define AGENT_INFORMATION_MANAGER           100
#define USER_PREFERENCES_MANAGER            300
#define ONCLICK_SCENARIO_SERVICE_MANAGER    600
#define TICKET_SERVICE_MANAGER              700
#define SURVEY_SERVICE_MANAGER              800
#define DATA_SERVICE_MANAGER                900
#define BACKGROUND_MANAGER                  2000
#define MESSAGE_MANAGER                     2100
#define BOOT_MANAGER                        2200
#define LOG_MANAGER                         2300

@interface EQCore : NSObject

@property (weak, nonatomic, readonly) id<EQAgentInformationManager> agentInformationManager;

@property (weak, nonatomic, readonly) id<EQUserPreferencesManager> userPreferencesManager;

@property (weak, nonatomic, readonly) id<EQScenarioManager> scenarioManager;

@property (weak, nonatomic, readonly) id<EQTicketManager> ticketManager;

@property (weak, nonatomic, readonly) id<EQSurveyManager> surveyManager;

@property (weak, nonatomic, readonly) id<EQDataManager> dataManager;

@property (weak, nonatomic, readonly) id<EQBackgroundManager> backgroundManager;

@property (weak, nonatomic, readonly) id<EQBootManager> bootManager;

@property (weak, nonatomic, readonly) id<EQLogManager> logManager;

/**
 *  Returns the instance of EQCore
 *
 *  @return The instance of EQCore
 */
+ (EQCore *)sharedInstance;

/**
 *  DEPRECATED : This method load in memory all objects needed by the SDK (load license, configuration,... in memory).
 *  It prepares all links with the OS SDK to run properly.
 *  This method doesn’t start any service or make connection through the network.
 *  The DQA must collect nothing.
 *
 *  @param launchOptions The parameter comes from UIApplicationDelegate application:didFinishLaunchingWithOptions:
 *  @param defaultBackgroundGpsMode The default background GPS mode used
 *
 *  @return The status of the core
 */
- (EQCoreStatus)initCoreWithOptions:(NSDictionary *)launchOptions backgroundMode:(EQBackgroundGpsMode) defaultBackgroundGpsMode __attribute__((deprecated));
/**
 *  Use initCoreWithOptions:(NSDictionary *)launchOptions backgroundMode:(EQBackgroundGpsMode) defaultBackgroundGpsMode instead.
 *  This method load in memory all objects needed by the SDK (load license, configuration,... in memory).
 *  It prepares all links with the OS SDK to run properly.
 *  This method doesn’t start any service or make connection through the network.
 *  The DQA must collect nothing.
 *
 *  @param launchOptions The parameter comes from UIApplicationDelegate application:didFinishLaunchingWithOptions:
 *
 *  @return The status of the core
 */
- (EQCoreStatus)initCoreWithOptions:(NSDictionary *)launchOptions;
/**
 *  DEPRECATED : Use initCoreWithOptions:(NSDictionary *)launchOptions instead.
 *  This method load in memory all objects needed by the SDK (load license, configuration,... in memory).
 *  It prepares all links with the OS SDK to run properly.
 *  This method doesn’t start any service or make connection through the network.
 *  The DQA must collect nothing.
 *
 *  @return The status of the core
 */
- (EQCoreStatus)initCore __attribute__((deprecated));

/**
 *  Start the EQCore kernel. If successful, the agent will start monitoring.
 *
 *  @param error A pointer to a EQError object
 *
 *  @return YES if the core started correctly, NO otherwise
 */
- (BOOL)startWithError:(EQError **)error;

/**
 *  This method stops the DQA.
 *  All services must be stopped but all objects can stay loaded in memory (license, configuration, ...).
 *
 *  @param error A pointer to a EQError object
 *
 *  @return YES if the core stopped correctly, NO otherwise
 */
- (BOOL)stopWithError:(EQError **)error;

/**
 *  This method frees the memory. 
 *  After a call to this method, the DQA can’t start without call before the init method.
 *
 *  @param error A pointer to a EQError object
 */
- (void)releaseCoreWithError:(EQError **)error;


/**
 *  This method generates the license from the server side.
 *  Important: must be called before the startWithError: method and after the initCore method.
 *
 *  @param DQAIDDelegate The delegate to get the result of the asynchronous request
 */
- (void)acceptEulaWithDQAIDDelegate:(id<EQDQAIDGenerationDelegate>)DQAIDDelegate __attribute__((deprecated));

/**
 *  This method generates the license from the server side.
 *  Important: must be called before the startWithError: method and after the initCore method.
 *
 *  @param DQAIDDelegate The delegate to get the result of the asynchronous request
 *  @param coupon Optional Coupon
 */
- (void)acceptEulaWithDQAIDDelegate:(id<EQDQAIDGenerationDelegate>)DQAIDDelegate coupon:(NSString *) coupon;

/**
 *  DEPRECATED : This method generates the license from the server side.
 *  Important: must be called before the startWithError: method and after the initCore method.
 *
 *  @param DQAIDDelegate   The delegate to get the result of the asynchronous request
 *  @param folder          The folder you want to pool your DQA ID
 *  @param eulaVersion     The current version of the EULA
 *  @param anonymous       YES if you want the agent to run in anonymous mode, NO otherwise
 */
- (void)acceptEulaWithDQAIDDelegate:(id<EQDQAIDGenerationDelegate>)DQAIDDelegate folder:(NSString *)folder eulaVersion:(NSUInteger)eulaVersion anonymous:(BOOL)anonymous  __attribute__((deprecated));

/**
 *  Returns a EQManagerInterface object
 *
 *  @param manager The name of the desired manager between AGENT_INFORMATION_MANAGER, USER_PREFERENCES_MANAGER, ONCLICK_SCENARIO_SERVICE_MANAGER, TICKET_SERVICE_MANAGER, SURVEY_SERVICE_MANAGER & DATA_SERVICE_MANAGER
 *  @param error A pointer to a EQError object
 *
 *  @return A EQManagerInterface object
 */
- (id<EQManagerInterface>)manager:(int)manager error:(EQError **)error DEPRECATED_MSG_ATTRIBUTE("Use properties instead of getter.");

/**
 *  Return the handle to a system-level service by name.
 *  The class of the returned object varies by the requested name
 *
 *  @return An EQManager who implements the EQManagerInterface. Can be nil if the name doesn’t exist.
 */
- (EQCoreStatus)status;

/**
 *  Return the framework version
 *
 *  @return The framework version
 */
- (NSString *)frameworkVersion;

/**
 *  Change the license EULA version
 *
 *  @param eulaVersion The EULA version to set
 */
- (void)setLicenseEulaVersion:(NSUInteger)eulaVersion __attribute__((deprecated));

/**
 *  This method should be called from UIApplication delegate to transfer completion handler to EQKernel
 *
 *  @param application       UIApplication
 *  @param completionHandler completion handler block needed to alert OS when download is finished
 */
- (void) performBackgroundFetch:(UIApplication *)application performFetchWithCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

/**
*  This method should be called from AppDelegate to set iOS 13 appRefresh
*
*  @param identifier The app refresh task indeitifier, set in the plist
*/
- (void)backgroundAppRefreshTask:(NSString *)identifier;

/**
*  This method should be called from AppDelegate to set iOS 13 process task
*
*  @param identifier The app processing task indeitifier, set in the plist
*/
- (void)backgroundProcessingTask:(NSString *)identifier;

#pragma mark - GPS Proxy

/*
 * Get instance of GPS Proxy. Do not call init of this object !
 *
 * @param EQGpsProxy Gps proxy instance
 */
- (EQGpsProxy *) gps;

#pragma mark - MSISDN

/*
 * Override the MSISDN. The value will be stored.
 * Setting parameter to nil will erase the stored value
 * Note that an exception will be raised if this method is called before core initialization
 *
 * @param msisdn The phone number
 * @param error The EQError by reference. Will be filled of an issue has occured
 */
- (void) setMsisdn:(NSString *) msisdn error:(EQError**)error;

/*
 * Return the value of the MSISDN
 * Note that an exception will be raised if this method is called before core initialization
 *
 * @param error The EQError by reference. Will be filled of an issue has occured
 *
 * @return The MSISDN (phone number)
 */
- (NSString *) msisdn:(EQError**)error;


/**
 Set a custom field int and persist information

 @param value The value
 @param index An index between 1 and 3 (values included)
 @param error An reference EQError, filled if something xrong occured 
 */
- (void)customFieldInt:(NSNumber *)value index:(NSInteger)index error:(EQError **)error;

/**
 Set a custom field double and persist information
 
 @param value The value
 @param index An index between 1 and 3 (values included)
 @param error An reference EQError, filled if something xrong occured
 */
- (void)customFieldDouble:(NSNumber *)value index:(NSInteger)index error:(EQError **)error;

/**
 Set a custom field string and persist information
 
 @param value The value
 @param index An index between 1 and 3 (values included)
 @param error An reference EQError, filled if something xrong occured
 */
- (void)customFieldString:(NSString *)value index:(NSInteger)index error:(EQError **)error;

/**
 Return the custom fields stored values into a single dictionary
 Possible dictionary keys are : custom_int_1, custom_int_2, custom_int_3, custom_double_1, custom_double_2, custom_double_3, custom_string_1, custom_string_2, custom_string_3

 @return The disctionary of custom fields
 */
- (NSDictionary *)customFields;


/**
 Enable lambert II coordinates in custom fields strings
 */
- (void)enableLambertIIEnrichment;

/*
 * UI_HFU_AND_001 / UI_HFU_IOS_001
 * Cube API to retrieve a cube for a specific name
 *
 * @param name The cube's name
 *
 * @return An EQCube object
 */
- (EQCube *) UICube:(NSString *) name;

/*
 * Report non fatal exceptions
 *
 * @param status YES if non fatal exception should be reported, NO otherwise (default YES)
 */
- (void)reportNonFatalException:(BOOL)status;
/**
 * Enable crash protection
 */
- (void)enableSDKProtection;

@end
