//
//  EQWebStepConfiguration.h
//  EQCoreLib
//
//  Created by David Rodrigues on 12/03/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQStepConfiguration.h>

@interface EQWebStepConfiguration : EQStepConfiguration

@property (strong, nonatomic, readonly) NSURL *url;
@property (assign, nonatomic, readonly) NSInteger timeout;
@property (assign, nonatomic, readonly) NSInteger sessionTime;

@end
