//
//  Value.h
//  POCube
//
//  Created by David Rodrigues on 5/6/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import "EQSQLiteColumn.h"
#import "EQFunction.h"

@interface EQValue : EQSQLiteColumn

@property (strong, nonatomic, readonly) EQFunction *function;

- (instancetype)initWithName:(NSString *)name function:(EQFunction *)function objectDefaultValue:(id)defaultValue;
- (instancetype)initWithName:(NSString *)name function:(EQFunction *)function type:(SQLiteType)type objectDefaultValue:(id)defaultValue;
- (NSString *)aggregateWithNewValue:(id)newValue;

@end
