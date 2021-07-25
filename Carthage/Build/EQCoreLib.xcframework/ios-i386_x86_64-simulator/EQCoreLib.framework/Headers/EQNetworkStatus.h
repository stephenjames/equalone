//
//  EQNetworkStatus.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

enum EQNetworkStatus {
    kNetworkStatusNotAvailable = -1,
    kNetworkStatusUnknown = 0,
    kNetworkStatusNoService = 1,
    kNetworkStatusEmergencyOnly = 2,
    kNetworkStatusSearching = 3,
    kNetworkStatusBusy = 4,
    kNetworkStatusHomeNetwork = 5,
    kNetworkStatusDenied = 6,
    kNetworkStatusRoamingInternational = 7,
    kNetworkStatusAirplane = 8,
    kNetworkStatusRoamingNational = 9,
    kNetworkStatusRoaming = 10
};
typedef enum EQNetworkStatus EQNetworkStatus;