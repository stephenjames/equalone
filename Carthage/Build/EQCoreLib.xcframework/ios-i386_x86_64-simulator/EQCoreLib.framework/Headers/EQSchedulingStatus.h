//
//  EQSchedulingStatus.h
//  EQCoreLib
//
//  Created by Hervé Rilos on 02/09/2015.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#ifndef EQCoreLib_EQSchedulingStatus_h
#define EQCoreLib_EQSchedulingStatus_h
#endif

typedef NS_ENUM(NSInteger, EQSchedulingStatus) {
    /** Unkwnon state. We are going to check what to do for now */
    EQSchedulingStatusUnknown,
    
    /** We are in a sleep time range. SLM ans SSM service should be stopped */
    EQSchedulingStatusOff,
    
    /** We are not in a sleep time range. Everything should run as normal */
    EQSchedulingStatusOnPeriod
};
