//
//  EQSurveyManager.h
//  EQCoreLib
//
//  Created by Hervé Rilos on 15/05/14.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import "EQManagerInterface.h"
#import "EQSurveyDelegate.h"
#import <EQCoreLib/EQSurveyStatus.h>

typedef NS_ENUM(NSInteger, EQSurveyErrorCode) {
    EQSurveyErrorCodeAlreadyAnswered = 1000,
    EQSurveyErrorCodeDataCollectionDisabled = 1100
};

@protocol EQSurveyManager <EQManagerInterface>

@required

/**
 *  Registers a delegate to manage EQSurvey events
 */
- (void)setDelegate:(id<EQSurveyDelegate>)delegate;

/**
 Saves the Survey to be send

 @param surveyInterface The survey to be saved
 @param status The status of the survey
 */
- (void)sendSurvey:(id<EQSurvey>)surveyInterface status:(EQSurveyStatus)status;

/**
 Returns a BOOL to know if the survey should be displayed

 @param survey The survey
 @param error  The error containing the reason if it can't be displayed
 @return YES if the survey should be displayed, NO otherwise
 */
- (BOOL)shouldDisplaySurvey:(id<EQSurvey>)survey error:(EQError **)error;

@end
