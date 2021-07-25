//
//  EQDataStatus.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

enum EQDataStatus {
    kDataStatusUnknown = 0,
    kDataStatusConnecting = 1, // Unavailable on iOS
    kDataStatusConnected = 2,
    kDataStatusSuspended = 3, // Unavailable on iOS
    kDataStatusDisconnecting = 4, // Unavailable on iOS
    kDataStatusDisconnected = 5,
    kDataStatusDisabledByUser = 6 //Available in private only
};
typedef enum EQDataStatus EQDataStatus;
