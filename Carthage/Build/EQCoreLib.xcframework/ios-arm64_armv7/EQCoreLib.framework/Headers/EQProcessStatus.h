//
//  EQProcessStatus.h
//  EQCoreLib
//
//  Created by David Rodrigues on 8/7/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

typedef NS_ENUM(NSInteger, EQProcessStatus) {
    EQProcessStatusUnknown = -1,
    EQProcessStatusAdded,
    EQProcessStatusRemoved,
    EQProcessStatusPriorityChanged
};
