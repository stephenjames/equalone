//
//  EQWebScenarioDelegate.h
//  EQCoreLib
//
//  Created by David RODRIGUES on 26/04/16.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <EQCoreLib/EQScenarioDelegate.h>

@class EQWebStepConfiguration;

@protocol EQWebScenarioDelegate <EQScenarioDelegate>

@optional

/**
 *  Called when the WebView start loading an URL
 *
 *  @param step       The web step configuration
 *  @param URL        The URL loading
 *  @param technology The technology used to perform the test
 */
- (void)step:(EQWebStepConfiguration * _Nonnull)step didStartLoadingURL:(NSURL * _Nonnull)URL technology:(EQNetworkTechnology)technology;

/**
 *  Called regularly when the WebView consider there is an update in the estimated progress
 *
 *  @param step     The web step configuration
 *  @param progress The progress
 */
- (void)step:(EQWebStepConfiguration * _Nonnull)step didUpdateEstimatedProgress:(double)progress;

@end
