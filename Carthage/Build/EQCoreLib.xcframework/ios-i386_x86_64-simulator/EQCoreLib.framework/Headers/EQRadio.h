//
//  EQRadio.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQNetworkStatus.h>
#import <EQCoreLib/EQDataStatus.h>
#import <EQCoreLib/EQRadioBearer.h>

@protocol EQRadio <NSObject>

@required
- (EQNetworkStatus)networkStatus;
- (EQDataStatus)dataStatus;
- (EQRadioBearer)radioBearer;
- (NSInteger)mobileNetworkCode;
- (NSInteger)mobileCountryCode;
- (NSInteger)cellId;
- (NSInteger)locationAreaCode;
- (NSInteger)receivedSignalStrengthIndication;

@end
