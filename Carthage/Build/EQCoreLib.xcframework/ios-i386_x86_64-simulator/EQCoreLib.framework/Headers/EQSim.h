//
//  EQSim.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQSimStatus.h>

@protocol EQSim <NSObject>

@required
- (EQSimStatus)status;
- (NSInteger)mobileCountryCode;
- (NSInteger)mobileNetworkCode;
- (NSString *)operatorLabel;
- (NSString *)msisdn;
- (NSString *)imsi;

@end
