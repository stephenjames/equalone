//
//  EQDeviceDelegate.h
//  EQCoreLib
//
//  Created by David Rodrigues on 9/8/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQBatteryInformation.h>

@protocol EQDeviceDelegate <NSObject>

- (void)batteryInformationDidChange:(EQBatteryInformation *)batteryInformation;

@end
