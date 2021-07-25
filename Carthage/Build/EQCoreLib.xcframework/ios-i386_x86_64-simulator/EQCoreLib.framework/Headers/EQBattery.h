//
//  EQBattery.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol EQBattery <NSObject>

@required

/**
 *  Battery level at the end of the event.
 *
 *  @return Battery level at the end of the event.
 */
- (NSInteger)batteryLevel;

@end
