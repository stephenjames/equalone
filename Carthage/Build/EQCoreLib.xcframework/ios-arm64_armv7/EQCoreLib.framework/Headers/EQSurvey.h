//
//  EQSurvey.h
//  EQCoreLib
//
//  Created by Hervé Rilos on 15/05/14.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQQuestion.h>
#import <EQCoreLib/EQAnswer.h>
#import <EQCoreLib/EQAnswerFreeField.h>
#import <EQCoreLib/EQError.h>
#import <EQCoreLib/EQSurveyStatus.h>

static NSString * const EQSurveyTaskIdentifier = @"task_identifier";

/**
 *  A protocol to manage Survey objects
 *  An EQSurvey contains all the questions and all possible answers for a given survey.
 *  
 */
@protocol EQSurvey <NSObject>

@required
/**
 *  The unique identifier of the current survey
 */
- (NSString *)identifier;


/**
 Identify the task that created the survey.

 @return A NSString * identifier to know which task created the survey. Can be nil;
 */
- (NSString *)taskIdentifier;

/**
 *  The survey's label
 */
- (NSString *)label;

/**
 *  Returns the first question found in the configuration for this survey
 *
 *  @return the first question found in the configuration for this survey
 */
- (id<EQQuestion>)firstQuestion;

/**
 *  Adds a pair of question/answer to the survey
 *  Returns the next question
 *
 *  @param answer   The answer to add
 *  @param question The question to add
 *  @param error    Will be set if the survey is already answered (functionnal error SURVEY_ALREADY_ANSWERED)
 */
- (id<EQQuestion>)addAnswer:(id<EQAnswer>)answer forQuestion:(id<EQQuestion>)question error:(EQError **)error;

/**
 *  Return the list of question and associated answer. This list cannot be cleared.
 *
 *  @return The list of question and associated answer, nil if no answered question yet.
 */
- (NSArray *)questionAnswers;

/**
 *  Sends the survey back to the EQSurveyManager which is responsible for dispatching it to registered services.
 *
 *  @param error Will be set : 1) If the survey has already been sent or in timeout (functionnal error SURVEY_NO_MORE_VALID). 2) if the survey is the service mode is EQBusinessServiceModeOcm (technical error SURVEY_ILLEGAL_CALL)
 */
- (void)send:(EQError **) error;

@end
