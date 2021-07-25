//
//  EQAnswerFreeField.h
//  EQCoreLib
//
//  Created by Hervé Rilos on 15/05/14.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQAnswer.h>

/**
 *  A protocol to manage EQAnswerFreeField
 *  A Free Field is an anwser with custom answers, for example from a user input.
 */
@protocol EQAnswerFreeField <EQAnswer>

@required

/**
 *  The text for the current answer
 */
- (NSString *)comment;

/**
 *  Sets a comment for the free field
 *
 *  @param comment The comment (free field answer)
 */
- (void)setComment:(NSString *)comment;

@end
