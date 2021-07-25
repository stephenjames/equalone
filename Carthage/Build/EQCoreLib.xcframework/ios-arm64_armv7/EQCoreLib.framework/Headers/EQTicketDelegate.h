//
//  EQTicketDelegate.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol EQTicketDelegate <NSObject>

@required

/**
 *  Call when new messages are available
 *
 *  @param tickets List of ticket with new messages
 */
- (void)didReceiveNewMessages:(NSArray *)tickets;

/**
 *  Call when tickets are changed of statuses
 *
 *  @param tickets List of ticket with new statuses
 */
- (void)didTicketStatusChanged:(NSArray *)tickets;
@end
