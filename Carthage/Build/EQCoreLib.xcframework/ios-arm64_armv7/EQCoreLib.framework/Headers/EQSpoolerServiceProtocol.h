//
//  EQSpoolerServiceProtocol.h
//  EQCoreLib
//
//  Created by David Rodrigues on 19/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQError.h>

@protocol EQSpoolerServiceProtocol <NSObject>

@optional
-(void) onSpoolerSuccess;
-(void) onSpoolerError:(EQError *) error;
-(void) onSpoolerNoFileToSend;

@end
