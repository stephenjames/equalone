//
//  EQBatteryInformation.h
//  EQCoreLib
//
//  Created by David Rodrigues on 9/8/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface EQBatteryInformation : NSObject

@property (strong, nonatomic, readonly) NSDate *date;
@property (assign, nonatomic, readonly) float level;
@property (assign, nonatomic, readonly) UIDeviceBatteryState state;

@end
