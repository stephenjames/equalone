//
//  EQHttpStepDetailConfiguration.h
//  EQCoreLib
//
//  Created by David Rodrigues on 4/1/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQDirection.h>
#import <EQCoreLib/EQTestType.h>

@interface EQHttpStepDetailConfiguration : NSObject <NSCopying>

@property (assign, nonatomic, readonly) NSInteger size;
@property (assign, nonatomic, readonly) NSTimeInterval timeout;
@property (assign, nonatomic, readonly) NSInteger socket;
@property (assign, nonatomic, readonly) EQDirection direction;
@property (assign, nonatomic, readonly) EQTestType type;
@property (strong, nonatomic, readonly) NSURL *url;

@end
