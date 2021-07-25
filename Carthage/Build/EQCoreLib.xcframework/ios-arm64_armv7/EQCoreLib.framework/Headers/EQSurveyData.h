//
//  EQSurveyData.h
//  EQCoreLib
//
//  Created by David Rodrigues on 30/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQData.h>
#import <EQCoreLib/EQQuestionAnswer.h>

@protocol EQSurveyData <NSObject>

- (NSString *)label;
- (NSArray *)questionAnswers;

@end
