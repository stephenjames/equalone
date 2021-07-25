//
//  EQPauseStepConfiguration.h
//  EQCoreLib
//
//  Created by David Rodrigues on 12/03/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQStepConfiguration.h>

@interface EQPauseStepConfiguration : EQStepConfiguration <NSCopying>

@property (assign, nonatomic, readonly) NSTimeInterval duration;

@end
