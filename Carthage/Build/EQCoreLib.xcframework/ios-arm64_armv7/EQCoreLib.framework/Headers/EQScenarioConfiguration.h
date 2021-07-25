//
//  EQScenarioConfiguration.h
//  EQCoreLib
//
//  Created by David Rodrigues on 11/03/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQGpsConfiguration.h>
#import <EQCoreLib/EQSurveyMode.h>

@class EQStepConfiguration;

@interface EQScenarioConfiguration : NSObject <NSCopying>

@property (assign, nonatomic, readonly) NSInteger iteration;
@property (assign, nonatomic, readonly) NSTimeInterval duration;
@property (strong, nonatomic, readonly) NSString *label;
@property (assign, nonatomic, readonly) EQSurveyMode surveyMode;

@property (strong, nonatomic, readonly) NSArray *steps;
@property (strong, nonatomic, readonly) EQGpsConfiguration *gpsConfiguration;

@property (assign, nonatomic, readonly, getter=shouldIgnoreCancel) BOOL ignoreCancel;

@end
