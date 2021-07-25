//
//  EQTicket.h
//  EQCoreLib
//
//  Created by David Rodrigues on 26/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <EQCoreLib/EQSurvey.h>
#import <EQCoreLib/EQTicketStatus.h>
#import <EQCoreLib/EQSurveyData.h>
#import <EQCoreLib/EQTicketLocation.h>
#import <EQCoreLib/EQTicketMessage.h>


/**
 *  Object containing all information about a ticket and to add new message.
 */
@protocol EQTicket <NSObject>

@required

/**
*  The identifier of the ticket
*
*  @return the ticket identifier
*/
- (NSString *)identifier;

/**
 *  The status of the ticket
 *
 *  @return the ticket status
 */
- (EQTicketStatus)status;

/**
 *  The creation date of the ticket. It can be different from the issue date.
 *
 *  @return the creation date
 */
- (NSDate *)creationDate;

/**
 *  The issue date when the problem has occurred. By default, this date is the same as the creation date. Depending of the method setIssueDate: has been called during the ticket creation, the issue date can be changed.
 *
 *  @return the issue date
 */
- (NSDate *)issueDate;

/**
 *  The date when the last modification occured. Can be nil if the ticket is freshly opened.
 *
 *  @return The date when the last update occured
 */
- (NSDate *)lastUpdateDate;

/**
 *  The date when the reopen occured on the server. Can be nil if the ticket was never reopened.
 *
 *  @return The reopened date
 */
- (NSDate *)reopenedDate;

/**
 *  The date when the ticket was closed by the server. By default, this date is nil.
 *
 *  @return The closure date
 */
- (NSDate *)closedDate;


/**
 *  The location of the ticket has occurred.
 *
 *  @return the location provided by the device if the setLocation() method are not be called, the location set otherwise. Can be null if no location has been provided.
 */
- (EQTicketLocation *)location;

/**
 *  the survey attached to the ticket.
 *
 *  @return The survey set by the campaign for the ticket. This method returns a EQSurveyData to see the survey answers.
 */
- (id<EQSurveyData>)surveyData;

/**
 *  Indicate if new messages are available in the ticket. This ticket stay in a unread state until the method listMessages() hasn’t been called.
 *
 *  @return true if all ticket messages are read, false otherwise
 */
- (BOOL)isNewMessagesAvailable;

/**
 *  Add a new message to the ticket. The message is sent to the server or wait Set the location of the ticket (where the problem has occurred).
 *
 *  @param content The message to add at the ticket. Can’t be null (raises NSInvalidArgumentException).
 *  @param error   Will be set if the ticket status is CLOSED or the answer mode is disabled (see EQTicketManager#isAnswerModeEnabled) or ticket service isn’t accessible
 */
- (void)addNewMessage:(NSString *)content error:(EQError **)error;

/**
 *  List of messages created for this ticket. The list can be updated with call EQTicketManage#updateTicketList() method. This method returns an empty list if the ticket isn’t created yet.
 *
 *  @return the messages list of the current ticket
 */
- (NSMutableArray *)messages;

/**
 *  Delete the ticket. The ticket is no longer available. This method can be called only when the status ticket is OPEN, CLOSED, REOPEN.
 */
- (void)deleteTicket;

@end
