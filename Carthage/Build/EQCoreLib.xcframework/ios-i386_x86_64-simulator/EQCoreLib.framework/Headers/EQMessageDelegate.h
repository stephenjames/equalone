//
//  EQMessageDelegate.h
//  EQCoreLib
//
//  Created by David Rodrigues on 4/2/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQError.h>

@protocol EQMessageDelegate <NSObject>

/**
 *  Return an array of id<EQMessage>. 
 *  Could be empty if no new messages are available.
 *
 *  @param messages The NSArray
 */
- (void)didReceiveMessages:(NSArray *)messages;

/**
 *  Called when an error occured during the refresh of messages
 *
 *  @param error The EQError
 */
- (void)didFailToRefreshMessages:(EQError *)error;

@end
