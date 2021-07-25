//
//  EQSurveyStatus.h
//  EQCoreLib
//
//  Created by Hervé Rilos on 06/05/2015.
//  Copyright (c) 2015 V3D. All rights reserved.
//

typedef NS_ENUM(NSInteger, EQSurveyStatus) {
    EQSurveyStatusUnknown = 0,
    EQSurveyStatusSuccess = 1,
    EQSurveyStatusCancel = 5,
    EQSurveyStatusTimeout = 4
};