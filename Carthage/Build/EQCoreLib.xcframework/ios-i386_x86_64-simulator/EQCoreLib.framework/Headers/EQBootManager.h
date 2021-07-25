//
//  EQBootManager.h
//  EQCoreLib
//
//  Created by David Rodrigues on 4/20/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <EQCoreLib/EQManagerInterface.h>
#import <EQCoreLib/EQBootFlag.h>

@protocol EQBootManager <EQManagerInterface>

/**
 *  Save a KPI in the spooler with the specified boot flag
 *
 *  @param bootFlag The boot flag of the generated KPI
 */
- (void)generateBootMessage:(EQBootFlag)bootFlag;

@end
