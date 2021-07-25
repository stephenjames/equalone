//
//  EQApplicationData.h
//  EQCoreLib
//
//  Created by David Rodrigues on 8/6/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <EQCoreLib/EQData.h>
#import <EQCoreLib/EQProcessStatus.h>

@protocol EQApplicationData <EQData>

- (NSString *)applicationName;
- (EQProcessStatus)processStatus;

@end
