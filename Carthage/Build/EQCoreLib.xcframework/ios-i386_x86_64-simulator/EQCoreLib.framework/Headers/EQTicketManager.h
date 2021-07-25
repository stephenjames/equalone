//
//  EQTicketManager.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQManagerInterface.h>
#import <EQCoreLib/EQTicketUpdateDelegate.h>
#import <EQCoreLib/EQTicketDelegate.h>
#import <EQCoreLib/EQTicketCreation.h>
#import <EQCoreLib/EQTicket.h>
#import <EQCoreLib/EQTicketMessage.h>

@protocol EQTicketManager <EQManagerInterface>

@required

/**
 *  Return whether the service is enabled or not
 *
 *  @return YES if the service is enabled, NO otherwise
 */
- (BOOL)isTicketEnabled;

/**
 *  Initializes a ticket. The ticket will be used to create a new ticket.
 *
 *  @param error will be set if the ticket service is non available (functionnal error TICKET_DISABLED)
 *
 *  @return an initialized ticket.
 */
- (id<EQTicketCreation>)newTicket:(EQError **)error;

/**
 *  Updates the ticket list from the server. Return the result through the listener from parameter
 *
 *  @param updateTicketDelegate The delegate when the update process has finished
 */
- (void)updateTicketListWithDelegate:(id<EQTicketUpdateDelegate>)updateTicketDelegate;

/**
 *  Sets a callback listener on the ticket service. This listener alerts when new messages are available or when a ticket status has changed
 *
 *  @param delegate The delegate when the update process has finished
 */
- (void)setDelegate:(id<EQTicketDelegate>)delegate;

/**
 *  The answer mode allows sending messages into ticket. If the answer mode is disabled, the EQTicket addNewMessage:error: selector is not available.
 *
 *  @return YES if the answer mode is enabled, NO otherwise
 */
- (BOOL)isAnswerModeEnabled;

/**
 *
 * Tells if the location should be provided
 *
 * @return YES if the location is enabled, NO otherwise
 */
 - (BOOL)hasLocationEnabled;

 /**
  *  Selects tickets from the databases depending of the conditions set from parameters.
  *
  *  @param ascending YES to order by date (creation) ascending, false otherwise
  *
  *  @return The tickets list, nil if no ticket found
 */
- (NSArray *)ticketsAscending:(BOOL)ascending;

/**
 *  Selects tickets from the databases depending of the conditions set from parameters.
 *
 *  @param ascending YES to order by date (creation) ascending, false otherwise
 *  @param status    Included all statuses set
 *
 *  @return The tickets list, nil if no ticket found
 */
- (NSArray *)ticketsAscending:(BOOL)ascending statuses:(EQTicketStatus)status;

/**
 *  Selects tickets from the databases depending of the conditions set from parameters.
 *
 *  @param ascending YES to order by date (creation) ascending, false otherwise
 *  @param startDate The beginning date, nil to select all tickets since the first
 *  @param endDate   The ending date, nil to select all tickets until the last
 *
 *  @return The tickets list, nil if no ticket found
 */
- (NSArray *)ticketsAscending:(BOOL)ascending startDate:(NSDate *)startDate endDate:(NSDate *)endDate;

/**
 *  Selects tickets from the databases depending of the conditions set from parameters.
 *
 *  @param ascending YES to order by date (creation) ascending, false otherwise
 *  @param startDate The beginning date, nil to select all tickets since the first
 *  @param endDate   The ending date, nil to select all tickets until the last
 *  @param status    Included all statuses set
 *
 *  @return The tickets list, nil if no ticket found
 */
- (NSArray *)ticketsAscending:(BOOL)ascending startDate:(NSDate *)startDate endDate:(NSDate *)endDate statuses:(EQTicketStatus)status;


@end
