//
//  EQWiFi.h
//  EQCoreLib
//
//  Created by David Rodrigues on 18/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQWiFiStatus.h>

@protocol EQWiFi <NSObject>

@required
- (EQWiFiStatus)status;
- (BOOL)isPublic;
- (NSString *)ssid;
- (NSString *)bssid;
- (NSInteger)receivedSignalStrengthIndication;

@end
