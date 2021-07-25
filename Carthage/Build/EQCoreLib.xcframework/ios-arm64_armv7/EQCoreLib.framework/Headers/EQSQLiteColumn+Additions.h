//
//  SQLiteColumn+Additions.h
//  EQualOne
//
//  Created by David Rodrigues on 5/20/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import "EQSQLiteColumn.h"

@interface EQSQLiteColumn (Additions)

- (NSDate *)UTCDateFromDate:(NSDate *)date calendarUnit:(NSCalendarUnit)calendarUnit;
- (NSDate *)dateFromData:(id<EQData>)data calendarUnit:(NSCalendarUnit)calendarUnit;
- (NSDictionary *)datesForData:(id<EQData>)data calendarUnit:(NSCalendarUnit)calendarUnit;

@end
