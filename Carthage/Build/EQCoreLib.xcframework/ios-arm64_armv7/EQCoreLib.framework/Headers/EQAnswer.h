//
//  EQAnswer.h
//  EQCoreLib
//
//  Created by Hervé Rilos on 15/05/14.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  A protocol to manage EQAnswer objects
 *  An EQAnswer is one of the proposals of a question.
 *  To record a question chosen by the user add the pair EQQuestion/EQAnswer to an EQSurvey instance
 */
@protocol EQAnswer <NSObject>

@required
/**
 *  The label of the answer
 */
- (NSString*)label;

/**
 *  Determines the type of the answer
 *
 *  @return YES if free field, NO otherwise
 */
- (BOOL)isFreeText;

/**
 *  Determines if the answer leads to a next question
 *
 *  @return YES if free field, NO otherwise
 */
- (BOOL)hasNextQuestion;

/**
 * Returns the exit message to be displayed at the end of a survey
 *
 * @return the exit message to be displayed at the end of a survey
 */
- (NSString *)exitMessage;

@end
