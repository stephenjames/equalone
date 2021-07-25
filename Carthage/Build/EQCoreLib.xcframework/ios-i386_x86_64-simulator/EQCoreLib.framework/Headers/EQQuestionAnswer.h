//
//  EQQuestionAnswer.h
//  EQCoreLib
//
//  Created by Hervé Rilos on 26/05/14.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQQuestion.h>
#import <EQCoreLib/EQAnswer.h>

@protocol EQQuestionAnswer <NSObject>

@required

/**
 *  Returns the EQQuestion of the pair Question/Answer
 *
 *  @return The EQQuestion
 */
- (id<EQQuestion>)question;

/**
 *  Returns the EQAnswer of the pair Question/Answer
 *
 *  @return The EQAnswer
 */
- (id<EQAnswer>)answer;

/**
 *  Returns true if the question and the answer are from freefield type
 *
 *  @return YES if freefield, NO otherwhise
 */
- (BOOL)isFreeText;

@end
