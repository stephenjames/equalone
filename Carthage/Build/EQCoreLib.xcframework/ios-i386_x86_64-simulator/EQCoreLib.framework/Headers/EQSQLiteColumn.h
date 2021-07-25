//
//  SQLiteColumn.h
//  POCube
//
//  Created by David Rodrigues on 5/11/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQData.h>

typedef NS_ENUM(NSInteger, SQLiteType) {
    SQLiteTypeUnknown = -1,
    SQLiteTypeInteger,
    SQLiteTypeVarchar64,
    SQLiteTypeReal,
};

@interface EQSQLiteColumn : NSObject <NSCopying> {
    @protected
    NSString *_name;
    SQLiteType _type;
    id _defaultValue;
}

@property (strong, nonatomic, readonly) NSString *name;
@property (assign, nonatomic, readonly) SQLiteType type;
@property (strong, nonatomic, readonly) id defaultValue;

+ (NSString *)name;
+ (SQLiteType)typeForObject:(id)object;
+ (NSString *)formatObject:(id)object;

- (NSString *)columnType;
- (NSArray *)valueForData:(id<EQData>)data;

@end
