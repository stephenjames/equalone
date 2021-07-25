//
//  EQTicketCreation.h
//  EQCoreLib
//
//  Created by David Rodrigues on 26/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQTicketStatus.h>
#import <CoreLocation/CoreLocation.h>
#import <EQCoreLib/EQSurvey.h>
#import <EQCoreLib/EQTicketLocation.h>


/**
 *  Object provided by the EQTicketManager to create a new ticket.
 */
@protocol EQTicketCreation <NSObject>

@required
/**
 *  Returns the creation date
 *
 *  @return the creation date
 */
- (NSDate *)creationDate;

/**
 *  The issue date when the problem has occurred. By default, this date is the same as the creation date. Depending of the method setIssueDate() has been called during the ticket creation, the issue date can be changed.
 *
 *  @return the creation date
 */
- (NSDate *)issueDate;

/**
 *  Sets the issue date of the ticket (when the problem has occurred). This method can be called only if the ticket is in the creation status.
 *
 *  @param issueDate The date when the problem has occurred
 *  @param error     Will be set if the ticket is not in creation mode (functionnal error TICKET_NOT_IN_CREATION)
 */
- (void)setIssueDate:(NSDate *)issueDate error:(EQError **)error;

/**
 *  The location of the ticket has occurred.
 *
 *  @return The location of the ticket has occurred.
 */
- (EQTicketLocation *)location;

/**
 *  Set the location of the ticket (where the problem has occurred). This method can be called only if the ticket is in the creation status.
 *
 *  @param ticketLocation Set the location of the ticket (where the problem has occurred). This method can be called only if the ticket is in the creation status.
 *  @param error    Will be set if the ticket is not in creation mode (functionnal error TICKET_NOT_IN_CREATION)
 */
- (void)setLocation:(EQTicketLocation *)ticketLocation error:(EQError **)error;

/**
 *  Set the location of the ticket (where the problem has occurred). This method can be called only if the ticket is in the creation status.
 *
 *  @param ticketLocation Set the location of the ticket (where the problem has occurred). This method can be called only if the ticket is in the creation status.
 *  @param placemark      The placemark if you made a reverse geocoding
 *  @param error          Will be set if the ticket is not in creation mode (functionnal error TICKET_NOT_IN_CREATION)
 */
- (void)setLocation:(EQTicketLocation *)ticketLocation placemark:(CLPlacemark *)placemark error:(EQError **)error;


- (id<EQSurvey>)survey;

/**
 *  Send the ticket to the server. This method can be called only when the status ticket is CREATION.
 *
 *  @param error Will be set if the survey has no answer (functionnal error TICKET_SURVEY_WITHOUT_ANSWER)
 */
- (void)send:(EQError **)error;

/**
 *  Cancel the ticket creation.
 */
- (void)cancel;

@end
