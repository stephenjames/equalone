//
//  EQScenarioManager.h
//  EQCoreLib
//
//  Created by David Rodrigues on 01/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQManagerInterface.h>
#import <EQCoreLib/EQScenario.h>
#import <EQCoreLib/EQScenarioConfiguration.h>
#import <WebKit/WebKit.h>

/**
 * This manager provides methods to get the scenarios defined on the DQA
 * by the server configuration (campaign). Each scenario can be started
 * and stopped. On the start action, the developer provides an
 * interface to callback when new events happen during the scenario (
 * {@link EQOnClickStepListener}) and his implemented classes.
 */
@protocol EQScenarioManager <EQManagerInterface>

@required

/**
 *  Initialize a scenario for the service you pass. The mode is set as an OCM scenario.
 *
 *  @param service The service you want the scenario for
 *
 *  @return A scenario with information retrieved
 */
- (EQScenario *)scenarioForService:(EQBusinessService)service;

/**
 *  Initialize a scenario for the service & the mode you pass. If multiple scenario configurations are available, it will choose the first one.
 *
 *  @param service The service you want the scenario for
 *  @param mode    The mode you want the scenario for
 *
 *  @return A scenario with information retrieved
 */
- (EQScenario *)scenarioForService:(EQBusinessService)service mode:(EQBusinessServiceMode)mode;

/**
 *  Initialize a scenario for the service, the mode & the scenario configuration you pass
 *
 *  @param service               The service you want the scenario for
 *  @param mode                  The mode you want the scenario for
 *  @param scenarioConfiguration The scenario configuration you want to start
 *
 *  @return A scenario with information retrieved
 */
- (EQScenario *)scenarioForService:(EQBusinessService)service mode:(EQBusinessServiceMode)mode scenarioConfiguration:(EQScenarioConfiguration *)scenarioConfiguration;

/**
 * Give the access to scenario configurations for the service & the mode you pass
 *
 * @param service The service you want the list for
 * @param mode    The mode you want the list for
 *
 * @return A list of scenario configurations for the service & mode
 */
- (NSArray<EQScenarioConfiguration *> *)scenarioConfigurationsForService:(EQBusinessService)service mode:(EQBusinessServiceMode)mode;

/**
 *
 * This method returns the list of senarios available in the server
 * configuration. All tests defined by the server will be in this list. If
 * the service isn't available (from the OS of from the configuration), it
 * will not be added to the list.The list can be empty but not
 * null.
 *
 *  @return The list of scenarios
 *         available in the server configuration for all supported OCM
 *         services (Http, Web, Video Streaming)
 */
- (NSArray *)scenariosAvailable;

/**
 *  Set the WKWebView component for OCM Web test
 *
 *  @param webView The WKWebView component used to show the web pages during the OCM Web test
 */
- (void)setWebView:(WKWebView *)webView;

/**
 *  Set the UIView component for OCM Video test
 *
 *
 *  @param videoContainerView The UIView component used to show the video during the OCM Video test
 */
- (void)setVideoContainerView:(UIView *)videoContainerView;


@end
