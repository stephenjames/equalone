//
//  EQLocation.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CLLocation.h>

#import <EQCoreLib/EQLocationStatus.h>
#import <EQCoreLib/EQLocationProvider.h>

@protocol EQLocation <NSObject>

@required
- (EQLocationStatus)status;
- (EQLocationProvider)provider;
- (CLLocationDegrees)latitude;
- (CLLocationDegrees)longitude;
- (CLLocationDistance)altitude;
- (CLLocationAccuracy)accuracy;
- (CLLocationAccuracy)altitudeAccuracy;
- (CLLocationSpeed)speed;

@end
