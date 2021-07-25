//
//  EQVoiceData.h
//  EQCoreLib
//
//  Created by David Rodrigues on 05/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQData.h>
#import <EQCoreLib/EQCallStatus.h>
#import <EQCoreLib/EQCallDirection.h>

@protocol EQVoiceData <EQData>

@required

/**
 *  EQLocation for the event
 *
 *  @return EQLocation for the event
 */
- (EQCallStatus)terminationCode;

/**
 *  Direction of the voice call (outgoing/incoming) (VO101)
 *
 *  @return Direction of the voice call (outgoing/incoming) (VO101)
 */
- (EQCallDirection)callDirection;

/**
 *  Remote Phone number. If the call is outgoing, the number called. If the call is incoming, the number calling. (VO102)
 *
 *  @return Remote Phone number. If the call is outgoing, the number called. If the call is incoming, the number calling. (VO102)
 */
- (NSString *)remotePhoneNumber;

/**
 *  Time to set up the call, from dialing to connecting. (VO008)
 *
 *  @return Time to set up the call, from dialing to connecting. (VO008)
 */
- (NSTimeInterval)setupTime;
// - (NSTimeInterval)speechTime; Unavailable on iOS

/**
 *  Total voice session time (VO010)
 *
 *  @return Total voice session time (VO010)
 */
- (NSTimeInterval)sessionTime;

/**
 *  Complementary information on the voice call status. (VO203)
 *
 *  @return Complementary information on the voice call status. (VO203)
 */
- (NSString *)detail;

@end
