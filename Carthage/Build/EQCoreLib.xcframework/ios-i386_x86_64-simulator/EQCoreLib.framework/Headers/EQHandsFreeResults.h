//
//  EQHandsFreeResults.h
//  EQCoreLib
//
//  Created by Sébastien MIZRAHI on 28/11/2016.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EQHandsFreeResults : NSObject

@property (nonatomic, assign) NSInteger countOfStandard;
@property (nonatomic, assign) NSInteger countOfBluetooth;
@property (nonatomic, assign) NSInteger countOfWired;
@property (nonatomic, assign) NSInteger countOfSpeaker;
@property (nonatomic, assign) NSInteger countOfCar;


- (NSInteger)sumOfAllTests;

@end
