//
//  EQSurveyDelegate.h
//  EQCoreLib
//
//  Created by Hervé Rilos on 15/05/14.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQSurvey.h>
#import <EQCoreLib/EQBusinessService.h>
#import <EQCoreLib/EQBusinessServiceMode.h>

@protocol EQSurveyDelegate <NSObject>

@required

/**
 *  Sent to the delegate when the EQSurveyManager needs to provide a new survey
 *
 *  @param survey  The survey provided to the registered service that can be used to handle events
 *  @param service The service to register to survey's events
 *  @param serviceMode    The mode of the registred service
 */
- (void)onNewSurveyAvailable:(id<EQSurvey>)survey service:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode;

/**
 *  Sent to the delegate when a survey times out
 *
 *  @param survey The survey provided to the registered service that can be used to handle events
 */
- (void)onSurveyTimeout:(id<EQSurvey>)survey;

/**
 *  Sent to the delegate when a survey needs to be cancelled
 *
 *  @param survey The survey to be cancelled
 */
- (void)onSurveyCanceled:(id<EQSurvey>)survey;

@optional
- (void)onNewSurveyAvailable:(id<EQSurvey>)survey service:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode atDate:(NSDate *)date timeout:(NSTimeInterval)timeout;

@end
