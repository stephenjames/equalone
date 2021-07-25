//
//  EQPinPoint.h
//  EQCoreLib
//
//  Created by David Rodrigues on 30/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface EQPinPoint : NSObject

@property (assign, nonatomic, readonly) CLLocationDegrees longitude;
@property (assign, nonatomic, readonly) CLLocationDegrees latitude;

- (instancetype)initWithLatitude:(CLLocationDegrees)latitude longitude:(CLLocationDegrees)longitude;
- (instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate;
- (instancetype)initWithLocation:(CLLocation *)location;

@end
