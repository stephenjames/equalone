//
//  EQCallStatus.h
//  EQCoreLib
//
//  Created by David Rodrigues on 05/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

enum EQCallStatus {
	kCallStatusUnknown,
    kCallStatusSuccess,
	kCallStatusFailure,
	kCallStatusDrop,
	kCallStatusConnected,
    kCallStatusNotConnected,
    kCallStatusTimeout,
    kCallStatusCancel,
};
typedef enum EQCallStatus EQCallStatus;