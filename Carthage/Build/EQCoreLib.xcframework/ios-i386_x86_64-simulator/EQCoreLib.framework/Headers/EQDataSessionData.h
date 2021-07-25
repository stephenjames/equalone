//
//  EQDataSessionData.h
//  EQCoreLib
//
//  Created by David Rodrigues on 05/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQData.h>
#import <EQCoreLib/EQDirection.h>
#import <EQCoreLib/EQDataTerminaisonCode.h>

@protocol EQDataSessionData <EQData>

@required

/**
 *  Direction of the HTTP data transfer (DAT101)
 *
 *  @return Direction of the HTTP data transfer (DAT101)
 */
- (EQDirection)direction;

/**
 *  Termination code for the HTTP data transfer event (DAT201)
 *
 *  @return Termination code for the HTTP data transfer event (DAT201)
 */
- (EQDataTerminaisonCode)terminationCode;

/**
 *  Session time, full duration of the data session (DAT002)
 *
 *  @return Session time, full duration of the data session (DAT002)
 */
- (NSTimeInterval)sessionTime;

/**
 *  Duration of the actual transfer activity (DAT001)
 *
 *  @return Duration of the actual transfer activity (DAT001)
 */
- (NSTimeInterval)activityTime;

/**
 *  Size of the transferred data (DAT102)
 *
 *  @return Size of the transferred data (DAT102)
 */
- (unsigned long long)volume;

@end
