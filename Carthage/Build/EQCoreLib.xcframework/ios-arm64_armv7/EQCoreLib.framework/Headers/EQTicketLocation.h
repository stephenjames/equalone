//
//  EQTicketLocation.h
//  EQCoreLib
//
//  Created by David Rodrigues on 03/07/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface EQTicketLocation : NSObject

@property (strong, nonatomic) CLLocation *location;
@property (strong, nonatomic) NSString *address;

- (instancetype)initWithLocation:(CLLocation *)location;
- (instancetype)initWithLocation:(CLLocation *)location address:(NSString *)address;

@end
