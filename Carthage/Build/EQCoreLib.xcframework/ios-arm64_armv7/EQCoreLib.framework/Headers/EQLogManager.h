//
//  EQLogManager.h
//  EQCoreLib
//
//  Created by David Rodrigues on 19/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQManagerInterface.h>
#import <EQCoreLib/EQLogServiceProtocol.h>
#import <EQCoreLib/EQSpoolerServiceProtocol.h>
#import <EQCoreLib/EQLogMacros.h>

@protocol EQLogManager <EQManagerInterface>

@required
- (NSInteger)logLevel;
- (void)sendLogsWithDelegate:(id<EQLogServiceProtocol>)delegate;
- (NSNumber *)logSize;
- (BOOL)isLogEnabled;
- (void)clearLogs;

@end
