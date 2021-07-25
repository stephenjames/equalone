//
//  EQGpsConfiguration.h
//  EQCoreLib
//
//  Created by David Rodrigues on 11/03/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, EQGpsMode) {
    EQGpsModeLow = 0,
    EQGpsModeFull = 1
};

typedef NS_ENUM(NSUInteger, EQGpsLocationType) {
    EQGpsLocationTypeEventPlusExtraTime = 3,
    EQGpsLocationTypeExtraTime = 4
};

@interface EQGpsConfiguration : NSObject <NSCoding>

@property (assign, nonatomic, readonly, getter = isEnabled) BOOL enabled;

@property (assign, nonatomic, readonly) long searchTime;
@property (assign, nonatomic, readonly) NSInteger accuracy;

@property (assign, nonatomic, readonly) EQGpsMode mode;
@property (assign, nonatomic, readonly) EQGpsLocationType locationType;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (instancetype)initWithEnabled:(BOOL)enabled mode:(EQGpsMode)mode locationType:(EQGpsLocationType)locationType accuracy:(NSInteger)accuracy searchTime:(long)searchTime;

- (BOOL)hasExtraTime;

@end
