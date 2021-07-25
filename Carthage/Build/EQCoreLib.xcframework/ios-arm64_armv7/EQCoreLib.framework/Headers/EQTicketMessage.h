//
//  EQTicketMessage.h
//  EQCoreLib
//
//  Created by David Rodrigues on 26/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQTicketMessageStatus.h>

@protocol EQTicketMessage <NSObject>

@required

/**
 *  The message status is provided by the enum EQMessageStatus.
 *
 *  @return the status of the message
 */
- (EQTicketMessageStatus)status;

/**
 *  The creation date of the message. When the selector EQTicket#addMessage has been called or when the operator has wrote a message on the server side.
 *
 *  @return the date when the message has been created
 */
- (NSDate *)creationDate;

/**
 *  The name of the creator
 *
 *  @return the name of the creator
 */
- (NSString *)creatorName;

/**
 *  The read date of the message. The read date corresponding to the time when the method markAsRead() has been called. This date is the same has creation date for the local message (wrote by the user).
 *
 *  @return the date when the message has been read
 */
- (NSDate *)readDate;

/**
 *  The content of the message. Take care: the content can contains HTTP, mail URI.
 *
 *  @return the content of the message
 */
- (NSString *)content;

/**
 *  Mark the message as read.
 */
- (void)markAsRead;

@end
