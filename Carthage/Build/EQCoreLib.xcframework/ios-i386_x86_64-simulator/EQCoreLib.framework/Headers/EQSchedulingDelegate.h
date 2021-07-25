//
//  EQSchedulingDelegate.h
//  EQCoreLib
//
//  Created by Hervé Rilos on 02/09/2015.
//  Copyright (c) 2015 V3D. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <EQCoreLib/EQSchedulingStatus.h>

@protocol EQSchedulingDelegate <NSObject>

@required

- (void)schedulingStatusDidChange:(EQSchedulingStatus)status;

@end