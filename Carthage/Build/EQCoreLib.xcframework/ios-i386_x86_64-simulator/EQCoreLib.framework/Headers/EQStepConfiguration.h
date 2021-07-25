//
//  EQStepConfiguration.h
//  EQCoreLib
//
//  Created by David RODRIGUES on 26/04/16.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EQBusinessService.h"

@interface EQStepConfiguration : NSObject <NSCopying> {
    @protected
    EQBusinessService _businessService;
}

@property (nonatomic, assign, readonly) EQBusinessService businessService;

- (NSTimeInterval)taskTimeout;

@end
