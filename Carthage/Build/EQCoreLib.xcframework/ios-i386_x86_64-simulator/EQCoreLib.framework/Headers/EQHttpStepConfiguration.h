//
//  EQHttpStepConfiguration.h
//  EQCoreLib
//
//  Created by David Rodrigues on 12/03/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQStepConfiguration.h>
#import <EQCoreLib/EQDirection.h>
#import <EQCoreLib/EQHttpStepDetailConfiguration.h>
#import <EQCoreLib/EQNetworkTechnology.h>

@interface EQHttpStepConfiguration : EQStepConfiguration

@property (assign, nonatomic, readonly) EQDirection direction;
@property (strong, nonatomic, readonly) NSDictionary *details;

- (EQHttpStepDetailConfiguration *)detailsForTechnology:(EQNetworkTechnology)networkTechnology;

@end