//
//  EQMScoreConfiguration.h
//  EQCoreLib
//
//  Created by David RODRIGUES (V3D) on 16/09/16.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <EQCoreLib/EQStepConfiguration.h>
#import <EQCoreLib/EQDirection.h>
#import <EQCoreLib/EQShooterType.h>
#import <EQCoreLib/EQMScoreModuleType.h>
#import <EQCoreLib/EQBusinessServiceMode.h>

FOUNDATION_EXPORT NSString * const _Nonnull EQMScoreHTTPScheme;
FOUNDATION_EXPORT NSString * const _Nonnull EQMScoreHTTPSScheme;

FOUNDATION_EXPORT NSString * const _Nonnull EQMScorePortKey;
FOUNDATION_EXPORT NSString * const _Nonnull EQMScoreTimeoutKey;
FOUNDATION_EXPORT NSString * const _Nonnull EQMScoreSocketKey;
FOUNDATION_EXPORT NSString * const _Nonnull EQMScoreVolumeKey;
FOUNDATION_EXPORT NSString * const _Nonnull EQMScoreDirectionKey;
FOUNDATION_EXPORT NSString * const _Nonnull EQMScoreServiceKey;
FOUNDATION_EXPORT NSString * const _Nonnull EQMScoreLogsKey;
FOUNDATION_EXPORT NSString * const _Nonnull EQMScoreLogsExtraTimeKey;
FOUNDATION_EXPORT NSTimeInterval const EQMScoreGetResultsTimeout;

@interface EQMScoreStepConfiguration : EQStepConfiguration <NSCopying>

@property (assign, nonatomic, readonly) EQBusinessServiceMode mode;
@property (strong, nonatomic, readonly, nonnull) NSArray<NSURL *> *URLs;
@property (assign, nonatomic, readonly) EQMScoreModuleType module;
@property (assign, nonatomic, readonly) NSInteger port;
@property (assign, nonatomic, readonly) NSTimeInterval timeout;
@property (assign, nonatomic, readonly) NSInteger sockets;
@property (assign, nonatomic, readonly) NSUInteger volume;
@property (assign, nonatomic, readonly) EQDirection direction;
@property (strong, nonatomic, readonly, nonnull) NSString *test;
@property (assign, nonatomic, readonly) EQShooterType type;
@property (assign, nonatomic, readonly, getter=isLogEnabled) BOOL logEnabled;

/**
 Extra log duration in milliseconds 
 */
@property (assign, nonatomic, readonly) NSInteger logExtraTime;
@property (assign, nonatomic, readonly) NSTimeInterval postTimeout;

@property (strong, nonatomic, readonly, nonnull) NSDictionary<NSString *, NSString *> *parameters;

- (instancetype _Nonnull)initWithDictionary:(NSDictionary * _Nonnull)dictionary mode:(EQBusinessServiceMode)mode;

@end
