//
//  EQLocationStatus.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

enum EQLocationStatus {
    kLocationStatusNotAvailable = -1,
    kLocationStatusUnknown = 0,
    kLocationStatusDisableUser = 1,
    kLocationStatusDisableOs = 2,
    kLocationStatusServer = 3,
    kLocationStatusSuccess DEPRECATED_ATTRIBUTE = 4,
    kLocationStatusFailed DEPRECATED_ATTRIBUTE = 5,
    kLocationStatusSettingsBoth = 10
};
typedef enum EQLocationStatus EQLocationStatus;