//
//  EQDebugManager.h
//  EQCoreLib
//
//  Created by David Rodrigues on 19/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQManagerInterface.h>

@protocol EQSpoolerManager <EQManagerInterface>

@required
- (void)sendDataSpooler;

@end
