//
//  EQNetworkNorm.h
//  EQCoreLib
//
//  Created by David RODRIGUES on 31/05/16.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQNetworkTechnology.h>

@interface EQNetworkNorm : NSObject <NSCopying>

@property (nonatomic, assign, readonly) NSInteger networkNormKey;
@property (nonatomic, strong, readonly) NSString *networkNormLabel;
@property (nonatomic, strong, readonly) NSString *networkNormTechLabel;
@property (nonatomic, assign, readonly) NSInteger networkNormGeneration;
@property (nonatomic, assign, readonly) EQNetworkTechnology networkNormServerKey;

@end
