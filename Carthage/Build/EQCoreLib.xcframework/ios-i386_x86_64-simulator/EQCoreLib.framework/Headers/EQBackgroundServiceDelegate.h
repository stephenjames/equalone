//
//  EQConfigurationUpdateAvailableDelegate.h
//  EQCoreLib
//
//  Created by Hervé Rilos on 17/03/2015.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQTicket.h>
#import <EQCoreLib/EQMessage.h>

@protocol EQBackgroundServiceDelegate <NSObject>

@optional
/**
 * This method is called when a configuration update with different background mode is received
 * A. Guideline's does not allow to change GPS mode when app is in background
 *
 * @param scenarioId The new configuration ID
 * @param version The new configuration version number
 */
- (void)didReceiveConfigurationUpdateAvailable:(NSInteger)scenarioId version:(NSInteger)version;
/**
 *  This method is called when a new ticket has been received
 *
 *  @param ticket Ticket
 */
- (void)didReceiveNewTicketMessage:(id<EQTicket>)ticket;
/**
 *  This method is called when a new message has been received
 *
 *  @param message A message
 */
-(void)didReceiveMessages:(id<EQMessage>)message;

@end
