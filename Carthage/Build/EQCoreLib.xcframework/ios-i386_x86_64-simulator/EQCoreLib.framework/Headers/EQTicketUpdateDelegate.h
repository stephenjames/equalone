//
//  EQTicketUpdateDelegate.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQError.h>

@protocol EQTicketUpdateDelegate <NSObject>

@optional
/**
 *  Call when new messages are available
 *
 *  @param tickets didReceiveNewMessages
 */
- (void)didReceiveNewMessages:(NSArray *)tickets;

/**
 *  didReceiveNewMessages
 *
 *  @param tickets List of ticket with new statuses
 */
- (void)didTicketStatusChanged:(NSArray *)tickets;

/**
 *  Call when all tickets are up to date
 */
- (void)onUpToDate;

/**
 *  Call when a technical error happens
 *
 *  @param error Will be set if a technical or functionnal error occurs
 */
- (void)didReceiveError:(EQError *)error;

@end
