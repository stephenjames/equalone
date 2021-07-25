//
//  EQLiveData.h
//  EQCoreLib
//
//  Created by David Rodrigues on 18/03/2015.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQSim.h>
#import <EQCoreLib/EQRadio.h>
#import <EQCoreLib/EQNetworkTechnology.h>
#import <EQCoreLib/EQWiFi.h>
#import <EQCoreLib/EQBattery.h>
#import <EQCoreLib/EQLocation.h>
#import <EQCoreLib/EQLiveDataCondition.h>

@interface EQLiveData : NSObject

@property (assign, nonatomic) NSTimeInterval timestamp;
@property (strong, nonatomic) id<EQSim> sim;
@property (strong, nonatomic) id<EQRadio> radio;
@property (assign, nonatomic) EQNetworkTechnology networkTechnology;
@property (strong, nonatomic) id<EQWiFi> wifi;
@property (strong, nonatomic) id<EQBattery> battery;
@property (strong, nonatomic) id<EQLocation> location;

- (instancetype)initWithConditions:(NSArray *)conditions;

@end
