//
//  EQNetstatData.h
//  EQCoreLib
//
//  Created by David Rodrigues on 05/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQData.h>

@protocol EQNetstatData <EQData>

@required
- (NSTimeInterval)sessionEnd;

@end
