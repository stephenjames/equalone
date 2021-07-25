//
//  EQVideoStepConfiguration.h
//  EQCoreLib
//
//  Created by David Rodrigues on 12/03/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQStepConfiguration.h>
#import <EQCoreLib/EQVideoProvider.h>

@interface EQVideoStepConfiguration : EQStepConfiguration

@property (assign, nonatomic, readonly) EQVideoProvider provider;
@property (strong, nonatomic, readonly) NSString *videoId;
@property (assign, nonatomic, readonly) NSInteger timeout;

@end
