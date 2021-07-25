//
//  EQActivityType.h
//  EQCoreLib
//
//  Created by David Rodrigues on 23/12/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

typedef NS_ENUM(NSUInteger, EQActivityType) {
    kActivityTypeUnknown = 0,
    kActivityTypeAutomotive = 1,
    kActivityTypeCycling = 2,
    kActivityTypeOnFoot = 3, // Not supported
    kActivityTypeRunning = 4,
    kActivityTypeTilting = 5, // Not supported
    kActivityTypeStationary = 6,
    kActivityTypeWalking = 7
};