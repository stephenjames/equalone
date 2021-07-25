//
//  EQScenario.h
//  EQCoreLib
//
//  Created by David RODRIGUES on 26/04/16.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQBusinessService.h>
#import <EQCoreLib/EQBusinessServiceMode.h>
#import <EQCoreLib/EQStepConfiguration.h>
#import <EQCoreLib/EQSurvey.h>
#import <EQCoreLib/EQSurveyMode.h>
#import <EQCoreLib/EQScenarioDelegate.h>
#import <EQCoreLib/EQHttpScenarioDelegate.h>
#import <EQCoreLib/EQMScoreScenarioDelegate.h>
#import <EQCoreLib/EQWebScenarioDelegate.h>
#import <EQCoreLib/EQVideoStreamingScenarioDelegate.h>
#import <EQCoreLib/EQPauseScenarioDelegate.h>
#import <EQCoreLib/EQSpoolerScenarioDelegate.h>
#import <EQCoreLib/EQScenarioConfiguration.h>
#import <WebKit/WebKit.h>

@interface EQScenario : NSObject

/**
 *  The identifier of the scenario. Only available when the scenario is started.
 */
@property (strong, nonatomic, nullable, readonly) NSDate *identifier;

/**
 *  The service used to instantiate the scenario
 */
@property (assign, nonatomic, readonly) EQBusinessService service;

/**
 *  The mode used to instantiate the scenario
 */
@property (assign, nonatomic, readonly) EQBusinessServiceMode mode;

/**
 *  A Boolean value that indicates if the scenario is currently running
 */
@property (assign, nonatomic, readonly, getter=isRunning) BOOL running;

/**
 *  Contains all steps defining the scenario. May be empty, but not null.
 */
@property (strong, nonatomic, nonnull, readonly) NSArray<EQStepConfiguration *> *steps;

/**
 *  A unsigned integer with the number of iterations of your scenario. 0 means infinite tests.
 */
@property (assign, nonatomic, readonly) NSUInteger iterations;

/**
 *  The timeout for the whole test. 
 */
@property (assign, nonatomic, readonly) NSTimeInterval timeout;

/**
 *  The GPS configuration for the test.
 */
@property (strong, nonatomic, nullable, readonly) EQGpsConfiguration *gpsConfiguration;

/**
 *  The survey associated with the scenario
 */
@property (strong, nonatomic, nullable, readonly) id<EQSurvey> survey;

/**
 *  Indicates if the survey is displayed should be displayed before or after the test
 */
@property (assign, nonatomic, readonly) EQSurveyMode surveyMode;

/**
 *  Initialize a scenario for the service you pass. The mode is set as an OCM scenario.
 *
 *  @param service The service you want the scenario for
 *
 *  @return A scenario with information retrieved
 */
- (instancetype _Nonnull)initWithService:(EQBusinessService)service;

/**
 *  Initialize a scenario for the service & the mode you pass
 *
 *  @param service The service you want the scenario for
 *  @param mode    The mode you want the scenario for
 *
 *  @return A scenario with information retrieved
 */
- (instancetype _Nonnull)initWithService:(EQBusinessService)service mode:(EQBusinessServiceMode)mode;

/**
 *  Initialize a scenario for the service & the mode you pass
 *
 *  @param service The service you want the scenario for
 *  @param mode    The mode you want the scenario for
 *
 *  @return A scenario with information retrieved
 */
- (instancetype _Nonnull)initWithService:(EQBusinessService)service mode:(EQBusinessServiceMode)mode scenarioConfiguration:(EQScenarioConfiguration * _Nonnull)scenarioConfiguration NS_DESIGNATED_INITIALIZER;

/**
 *  Convenience method to start the scenario if you don't want to track the progression. 
 *  Equivalent to a call of startWithDelegate:nil.
 */
- (void)start;

/**
 *  Start the scenario
 *
 *  @param delegate A delegate to track the progression
 */
- (void)startWithDelegate:(id<EQScenarioDelegate> _Nullable)delegate;

/**
 *  Stop the scenario
 */
- (void)stop;


#pragma mark - Web & Video

/**
 *  Call this method with your WebView if you want to be able to run Web tests
 *
 *  @param webView The WebKit WebView
 */
- (void)setWebView:(WKWebView * _Nonnull)webView;

/**
 *  Call this method with your view if you want to be able to run Video streaming tests.
 *  The video will be displayed inside this view.
 *
 *  @param videoContainerView The container view
 */
- (void)setVideoContainerView:(UIView * _Nonnull)videoContainerView;

- (void) updateSurveyScenarioId:(NSDate *  _Nonnull)scenarioId;

@end
