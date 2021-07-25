//
//  EQGpsProxy.h
//  EQCoreLib
//
//  Created by Sébastien MIZRAHI on 04/02/2015.
//  Copyright (c) 2015 V3D. All rights reserved.
//

// EQROADMAP-26

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <EQCoreLib/EQBackgroundMode.h>

// EQGpsProxy protocol

@protocol EQGpsProxyDelegate <NSObject>

@optional
- (void) backgroundModeIsStopped;
- (void) gpsHasBeenStopped;

@end


@interface EQGpsProxy : NSObject <CLLocationManagerDelegate>


// Public properties
@property(readonly, nonatomic) CLLocation *lastLocation;

// Proxy CLLocationManager properties
@property(readonly, nonatomic) BOOL locationServicesEnabled __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_NA,__MAC_NA,__IPHONE_2_0,__IPHONE_4_0);
@property(copy, nonatomic) NSString *purpose __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_7, __MAC_NA, __IPHONE_3_2, __IPHONE_6_0);
@property(assign, nonatomic) CLActivityType activityType __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_6_0);
@property(assign, nonatomic) CLLocationDistance distanceFilter;
@property(assign, nonatomic) CLLocationAccuracy desiredAccuracy;
@property(assign, nonatomic) BOOL pausesLocationUpdatesAutomatically;
@property(readonly, nonatomic, copy) CLLocation *location;
@property(readonly, nonatomic) BOOL headingAvailable __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_NA,__MAC_NA,__IPHONE_3_0,__IPHONE_4_0);
@property(assign, nonatomic) CLLocationDegrees headingFilter __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_3_0);
@property(assign, nonatomic) CLDeviceOrientation headingOrientation __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_4_0);
@property(readonly, nonatomic, copy) CLHeading *heading __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_4_0);
@property (readonly, nonatomic) CLLocationDistance maximumRegionMonitoringDistance __OSX_AVAILABLE_STARTING(__MAC_10_7,__IPHONE_4_0);
@property (readonly, nonatomic, copy) NSSet *monitoredRegions __OSX_AVAILABLE_STARTING(__MAC_10_7,__IPHONE_4_0);
@property (readonly, nonatomic, copy) NSSet *rangedRegions __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_7_0);

/**
 *
 * Request location permission
 *
 */
- (void) requestLocationAuthorization;

/**
 *
 * Return the location authorisation permission status
 *
 * @return CLAuthorizationStatus Permission status
 */
- (CLAuthorizationStatus)authorizationStatus;

/**
 *  Request location with specific accuracy and timeout
 *
 *  @param timeout  Timeout in seconds. Set 0 for infinite search.
 *  @param accuracy Desired accuracy
 */
- (void) startUpdatingLocation:(NSTimeInterval) timeout accuracy:(CLLocationAccuracy) accuracy;

/**
 *  Request location with specific accuracy and timeout
 *
 *  @param timeout  Timeout in seconds. Set 0 for infinite search.
 *  @param accuracy Desired accuracy
 *  @param distanceFilter Distance between location notification events
 */
- (void) startUpdatingLocation:(NSTimeInterval) timeout accuracy:(CLLocationAccuracy) accuracy distanceFilter:(CLLocationDistance) distanceFilter;

/**
 *  This method is called when location should be started.
 *  IMPORTANT : Note that a call with this method will force GPS and will potentially not be compliant 
 *  with background mode
 */
- (void) startUpdatingLocation;

/**
 *  This method is called when significant changes location should be started.
 *  IMPORTANT : Note that a call with this method will force GPS and will potentially not be compliant
 *  with background mode
 */
- (void) startMonitoringSignificantLocationChanges;

/**
 *  This method is called when location should be stopped. 
 *  Proxy will automatically stop GPS services depending on background settings.
 */
- (void) stopUpdatingLocation;

/**
 *  Call this when all background services should been stopped.
 *  If the application state change (eg inactive), no service will run
 */
- (void) stopBackgroundMode;

/**
 *  Register a CLLocationManager delegate to proxy
 *  Each delegates register will be notified when GPS event will be fired
 *
 *  @param locationManagerDelegate A class that receives GPS events
 */
- (void) registerDelegate:(id<CLLocationManagerDelegate, EQGpsProxyDelegate>) locationManagerDelegate;

/**
 *  Unregister a CLLocationManager delegate to proxy
 *
 *  @param locationManagerDelegate A class that receives GPS events
 */
- (void) unregisterDelegate:(id<CLLocationManagerDelegate, EQGpsProxyDelegate>) locationManagerDelegate;

// CLLocationManager methods
- (void)requestWhenInUseAuthorization API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos);
- (void)requestAlwaysAuthorization API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos) API_UNAVAILABLE(tvos);
- (BOOL)locationServicesEnabled API_AVAILABLE(ios(4.0), macos(10.7));
- (BOOL)deferredLocationUpdatesAvailable API_AVAILABLE(ios(6.0), macos(10.9)) API_UNAVAILABLE(watchos, tvos);
- (BOOL)significantLocationChangeMonitoringAvailable API_AVAILABLE(ios(4.0), macos(10.7)) API_UNAVAILABLE(watchos, tvos);
- (BOOL)headingAvailable API_AVAILABLE(ios(4.0), macos(10.7)) API_UNAVAILABLE(watchos, tvos);
- (BOOL)isMonitoringAvailableForClass:(Class)regionClass API_AVAILABLE(ios(7.0), macos(10.10)) API_UNAVAILABLE(watchos, tvos);
- (BOOL)isRangingAvailable API_AVAILABLE(ios(7.0)) API_UNAVAILABLE(macos) API_UNAVAILABLE(watchos, tvos);
- (void)requestLocation API_AVAILABLE(ios(9.0), macos(10.14));
- (void)setAllowsBackgroundLocationUpdates:(BOOL)allowsBackgroundLocationUpdates;
- (BOOL)allowsBackgroundLocationUpdates;
- (void)setShowsBackgroundLocationIndicator:(BOOL)showsBackgroundLocationIndicator;
- (BOOL)showsBackgroundLocationIndicator;
- (void)stopMonitoringSignificantLocationChanges API_AVAILABLE(ios(4.0), macos(10.7)) API_UNAVAILABLE(watchos, tvos);
- (void)startUpdatingHeading API_AVAILABLE(ios(3.0)) API_UNAVAILABLE(macos) API_UNAVAILABLE(watchos, tvos);
- (void)stopUpdatingHeading API_AVAILABLE(ios(3.0)) API_UNAVAILABLE(macos) API_UNAVAILABLE(watchos, tvos);
- (void)dismissHeadingCalibrationDisplay API_AVAILABLE(ios(3.0)) API_UNAVAILABLE(macos) API_UNAVAILABLE(watchos, tvos);
- (void)startMonitoringForRegion:(CLRegion *)region
                 desiredAccuracy:(CLLocationAccuracy)accuracy API_DEPRECATED_WITH_REPLACEMENT("-startMonitoringForRegion:", ios(4.0, 6.0)) API_UNAVAILABLE(macos) API_UNAVAILABLE(watchos, tvos);
- (void)startMonitoringForRegion:(CLRegion *)region API_AVAILABLE(ios(5.0), macos(10.8)) API_UNAVAILABLE(watchos, tvos);
- (void)stopMonitoringForRegion:(CLRegion *)region API_AVAILABLE(ios(4.0), macos(10.8)) API_UNAVAILABLE(watchos, tvos);
- (void)startRangingBeaconsInRegion:(CLBeaconRegion *)region API_AVAILABLE(ios(7.0)) API_UNAVAILABLE(macos) API_UNAVAILABLE(watchos, tvos);
- (void)stopRangingBeaconsInRegion:(CLBeaconRegion *)region API_AVAILABLE(ios(7.0)) API_UNAVAILABLE(macos) API_UNAVAILABLE(watchos, tvos);
- (void)requestStateForRegion:(CLRegion *)region API_AVAILABLE(ios(7.0), macos(10.10)) API_UNAVAILABLE(watchos, tvos);
- (void)allowDeferredLocationUpdatesUntilTraveled:(CLLocationDistance)distance
                                          timeout:(NSTimeInterval)timeout API_AVAILABLE(ios(6.0)) API_UNAVAILABLE(macos) API_UNAVAILABLE(watchos, tvos);
- (void)disallowDeferredLocationUpdates API_AVAILABLE(ios(6.0)) API_UNAVAILABLE(macos) API_UNAVAILABLE(watchos, tvos);

@end
