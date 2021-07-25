//
//  EQMessage.h
//  EQCoreLib
//
//  Created by David Rodrigues on 4/2/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQMessageStatus.h>

@protocol EQMessage <NSObject>

@property (strong, nonatomic, readonly) NSString *title;
@property (strong, nonatomic, readonly) NSString *content;
@property (strong, nonatomic, readonly) NSDate *startDate;
@property (strong, nonatomic, readonly) NSDate *endDate;
@property (assign, nonatomic, readonly) EQMessageStatus status;

@end
