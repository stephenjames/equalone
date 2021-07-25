//
//  EQData.h
//  EQCoreLib
//
//  Created by David Rodrigues on 18/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <EQCoreLib/EQSim.h>
#import <EQCoreLib/EQRadio.h>
#import <EQCoreLib/EQWiFi.h>
#import <EQCoreLib/EQBattery.h>
#import <EQCoreLib/EQLocation.h>

#import <EQCoreLib/EQBusinessService.h>
#import <EQCoreLib/EQBusinessServiceMode.h>
#import <EQCoreLib/EQNetworkTechnology.h>

@protocol EQData <NSObject>

@required

/**
 *  Date Agent
 *
 *  @return Date Agent
 */
- (NSDate *)date;

/**
 *  Scenario ID
 *
 *  @return Scenario ID
 */
- (NSDate *)scenarioId;

/**
 *  Duration of the event
 *
 *  @return Duration of the event
 */
- (NSTimeInterval)duration;

/**
 *  Iteration index of the test (OCM only)
 *
 *  @return Iteration index of the test (OCM only)
 */
- (NSInteger)iterationIndex;

/**
 *  EQSim for the event
 *
 *  @return EQSim for the event
 */
- (id<EQSim>)sim;

/**
 *  Radio state at the beginning of the event
 *
 *  @return Radio state at the beginning of the event
 */
- (id<EQRadio>)radioBegin;

/**
 *  Radio state at the end of the event
 *
 *  @return Radio state at the end of the event
 */
- (id<EQRadio>)radioEnd;

/**
 *  WiFi state at the beginning of the event
 *
 *  @return WiFi state at the beginning of the event
 */
- (id<EQWiFi>)wifiBegin;

/**
 *  WiFi state at the end of the event
 *
 *  @return WiFi state at the end of the event
 */
- (id<EQWiFi>)wifiEnd;

/**
 *  Battery state at the beginning of the event
 *
 *  @return Battery state at the beginning of the event
 */
- (id<EQBattery>)batteryBegin;

/**
 *  Battery state at the end of the event
 *
 *  @return Battery state at the end of the event
 */
- (id<EQBattery>)batteryEnd;

/**
 *  EQLocation for the event
 *
 *  @return EQLocation for the event
 */
- (id<EQLocation>)location;

/**
 *  Service the event was captured in
 *
 *  @return Service the event was captured in
 */
- (EQBusinessService)service;

/**
 *  Mode the event was captured in
 *
 *  @return Mode the event was captured in
 */
- (EQBusinessServiceMode)serviceMode;

/**
 *  Network technology at the beginning of the event
 *
 *  @return Network technology at the beginning of the event
 */
- (EQNetworkTechnology)aggTechnologyBegin;

/**
 *  Network technology at the end of the event
 *
 *  @return Network technology at the end of the event
 */
- (EQNetworkTechnology)aggTechnologyEnd;

@end
