//
//  EQCoreStatus.h
//  EQCoreLib
//
//  Created by David Rodrigues on 19/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

typedef NS_ENUM(NSInteger, EQCoreStatus) {
    EQCoreStatusIdle = 0, /** Default state of the agent. It is not running nor initialized. */
    EQCoreStatusRunning = 2, /** The agent has been initialized and started successfully with the EQCore startWithError: method */
    EQCoreStatusDQAIDMissing = 3, /** The agent has been initialized but doesn't have a license */
    EQCoreStatusDQAIDExpired DEPRECATED_ATTRIBUTE = 4, /** The agent has been initialized but it's license has been revoked on the EQualOne Server */
    EQCoreStatusDQAIDOk = 5 /** The agent has been initialized and has a license */
};