//
//  EQDataDelegate.h
//  EQCoreLib
//
//  Created by David Rodrigues on 30/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQData.h>
#import <EQCoreLib/EQBusinessService.h>
#import <EQCoreLib/EQBusinessServiceMode.h>

@protocol EQDataDelegate <NSObject>

@optional
/**
 *  Callback invoked when a new result for the specified service has been recorded.
 *
 *  @param data        The result saved
 *  @param service     The service associated to the data
 *  @param serviceMode The mode associated to the data
 *
 *  @return BOOL       YES if data should be saved, otherwise NO 
 */
- (BOOL)didReceiveNewResult:(id<EQData>)data forService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode;

@end
