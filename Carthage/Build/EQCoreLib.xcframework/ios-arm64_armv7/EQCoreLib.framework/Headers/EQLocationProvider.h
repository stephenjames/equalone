//
//  EQLocationProvider.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

enum EQLocationProvider {
    kLocationProviderUnknown = 0,
    kLocationProviderNetwork = 1,
    kLocationProviderGps = 2,
    kLocationProviderGpsA = 3,
    kLocationProviderUser = 4
};
typedef enum EQLocationProvider EQLocationProvider;
