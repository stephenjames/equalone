//
//  EQUtilities.h
//  EQCoreLib
//
//  Created by David Rodrigues on 16/03/2015.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EQUtilities : NSObject

+ (double)throughputWithBytes:(unsigned long long)bytes interval:(NSTimeInterval)interval;

@end
