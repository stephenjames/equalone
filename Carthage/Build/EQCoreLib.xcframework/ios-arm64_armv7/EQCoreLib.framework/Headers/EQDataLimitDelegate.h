//
//  EQDataLimitDelegate.h
//  EQCoreLib
//
//  Created by David Rodrigues on 02/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol EQDataLimitDelegate <NSObject>

@required

/**
 *  Callback invoked when the minimum storage left value has been reached.
 */
- (void)onMininumStorageSize;

/**
 *  Callback invoked when the minimum storage left value (in percentage of total storage) has been reached.
 */
- (void)onMinimumStoragePercentage;

/**
 *  Callback invoked when the maximum storage date has been reached. The results older than this value will be automatically deleted.
 */
- (void)onMaximumStorageTime;

/**
 *  Callback invoked when there is no storage left on the device. The agent will stop at that point.
 */
- (void)onNoStorageLeft;

@end