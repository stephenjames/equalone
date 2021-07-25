//
//  EQBusinessServiceMode.h
//  EQCoreLib
//
//  Created by David Rodrigues on 30/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

typedef NS_ENUM(NSInteger, EQBusinessServiceMode) {
    EQBusinessServiceModeUnknown = -1,
    EQBusinessServiceModeOcm = 3,
    EQBusinessServiceModeSlm = 1,
    EQBusinessServiceModeSsm = 2
};

#define kFirstBusinessServiceMode   EQBusinessServiceModeSlm
#define kLastBusinessServiceMode    EQBusinessServiceModeOcm