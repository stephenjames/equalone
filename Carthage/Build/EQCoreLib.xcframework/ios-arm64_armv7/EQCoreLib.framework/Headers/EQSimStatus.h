//
//  EQSimStatus.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

enum EQSimStatus {
    kSimStateNotAvailable = -1,
    kSimStateUnknown = 0,
    kSimStateAbsent = 1,
    kSimStateNetworkLocked = 2,
    kSimStatePinRequire = 3,
    kSimStatePukRequire = 4,
    kSimStateReady = 5
};
typedef enum EQSimStatus EQSimStatus;