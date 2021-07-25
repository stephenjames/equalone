//
//  EQQuestion.h
//  EQCoreLib
//
//  Created by Hervé Rilos on 15/05/14.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  A protocol to manage EQQuestion objects
 *  An EQQuestion contains a question picked from the configuration and the list of proposals (answers) for this question
 */
@protocol EQQuestion <NSObject>

@required

/**
 *  Returns the list of all anwsers for this question
 *
 *  @return A NSMutableArray holding the list of the answers.
 */
- (NSMutableArray *)answers;

/**
 *  Returns the label of the question
 *
 *  @return A NSString holding the label of the question.
 */
- (NSString *)label;

- (BOOL) isOnlyFreeText;
@end
