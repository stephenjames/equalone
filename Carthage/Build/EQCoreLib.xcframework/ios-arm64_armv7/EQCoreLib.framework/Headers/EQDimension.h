//
//  Dimension.h
//  POCube
//
//  Created by David Rodrigues on 5/6/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import "EQSQLiteColumn.h"

@interface EQDimension : EQSQLiteColumn

- (instancetype)initWithName:(NSString *)name defaultValue:(id)defaultValue;

@end