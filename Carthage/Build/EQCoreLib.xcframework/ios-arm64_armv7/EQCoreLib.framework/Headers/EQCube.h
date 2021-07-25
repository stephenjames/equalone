//
//  Cube.h
//  POCube
//
//  Created by David Rodrigues on 5/6/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQDimension.h>
#import <EQCoreLib/EQValue.h>


@class EQCube, FMDatabaseQueue;

@protocol CubeDelegate <NSObject>

@optional
- (void)cubeDataDidChanged:(EQCube *)cube;

@end

@interface EQCube : NSObject

/**
 *  Cube name
 */
@property (strong, nonatomic, readonly) NSString *name;

/**
 *  Maximum time of
 */
@property (assign, nonatomic, readonly) NSTimeInterval retentionTime;

/**
 *  Cube dimensions
 */
@property (strong, nonatomic, readonly) NSArray *dimensions;

/**
 *  Cube values
 */
@property (strong, nonatomic, readonly) NSArray *values;

@property (strong, nonatomic, readonly) FMDatabaseQueue *databaseQueue;

- (instancetype)initWithDatabaseQueue:(FMDatabaseQueue *)databaseQueue;
- (instancetype)initWithName:(NSString *)name databaseQueue:(FMDatabaseQueue *)databaseQueue;
- (instancetype)initWithName:(NSString *)name retentionTime:(NSTimeInterval)retentionTime databaseQueue:(FMDatabaseQueue *)databaseQueue;

/**
 *  Initialize the cube
 *
 *  @param servicesMode A NSDictionary with NSNumber keys containing EQBusinessService & NSNumber values containing 1 EQBusinessServiceMode or a NSArray containing multiples NSNumber values
 *  @param dimensions   A NSArray of Dimension
 *  @param values       A NSArray of Value
 */
- (void)initializeWithServicesMode:(NSDictionary *)servicesMode dimensions:(NSArray *)dimensions values:(NSArray *)values;

/**
 *  Create or Update the table schema
 */
- (void)updateTableSchema;


/**
 Delete all the datas stored in the cube

 @return YES if the delete succeeded, NO otherwise
 */
- (BOOL)deleteData;

- (NSString *)cleanSQLQuery;

- (void)addDelegate:(id<CubeDelegate>)delegate;

- (BOOL)saveObject:(id)object;

@end
