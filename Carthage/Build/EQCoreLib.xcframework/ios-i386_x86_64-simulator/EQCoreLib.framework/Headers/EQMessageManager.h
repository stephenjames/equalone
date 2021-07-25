//
//  EQMessageManager.h
//  EQCoreLib
//
//  Created by David Rodrigues on 4/2/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <EQCoreLib/EQManagerInterface.h>
#import <EQCoreLib/EQMessage.h>
#import <EQCoreLib/EQMessageDelegate.h>

@protocol EQMessageManager <EQManagerInterface>

/**
 *  Return all received messages
 *
 *  @return A NSArray of id<EQMessage>
 */
- (NSArray *)messages;

/**
 *  Return all messages with the status passed in parameter
 *
 *  @param status The status filter
 *
 *  @return A NSArray of id<EQMessage>
 */
- (NSArray *)messagesWithStatus:(EQMessageStatus)status;

/**
 *  Delete the message
 *
 *  @param message The message to delete
 */
- (void)deleteMessage:(id<EQMessage>)message;

/**
 *  Refresh the message asynchronously and calls you back through the delegate
 *
 *  @param delegate The delegate
 */
- (void)refreshWithDelegate:(id<EQMessageDelegate>)delegate;

@end
