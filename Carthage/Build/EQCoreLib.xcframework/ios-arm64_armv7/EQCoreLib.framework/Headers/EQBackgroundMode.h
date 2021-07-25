//
//  EQBackgroundMode.h
//  EQCoreLib
//
//  Created by Sébastien MIZRAHI on 20/02/2015.
//  Copyright (c) 2015 V3D. All rights reserved.
//

enum EQBackgroundGpsMode {
    EQBackgroundGpsModeUnknown = -1,
    EQBackgroundGpsModeNone = 0,
    EQBackgroundGpsModeSampling = 1,
    EQBackgroundGpsModeAlwaysOn = 2
};
typedef enum EQBackgroundGpsMode EQBackgroundGpsMode;

typedef NS_ENUM(NSInteger, EQTaskExecutionMode){
    EQTaskExecutionModeAlwaysOn                 = 1 << 0,
    EQTaskExecutionModeSampling                 = 1 << 1,
    EQTaskExecutionModeFetch                    = 1 << 2,
    EQTaskExecutionModeUI                       = 1 << 3,
    EQTaskExecutionModeBackgroundTaskRefresh    = 1 << 4,
    EQTaskExecutionModeBackgroundTaskProcessing = 1 << 5
};


