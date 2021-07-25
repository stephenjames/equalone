//
//  EQVolumeData.h
//  EQCoreLib
//
//  Created by David Rodrigues on 8/6/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <EQCoreLib/EQData.h>
#import <EQCoreLib/EQNetworkType.h>

@protocol EQVolumeData <EQData>

/**
 *  Retrieve the application name to the volume data measure
 *
 *  @return The name of the app
 */
- (NSString *)appName;

/**
 *  Retrieve the network type corresponding to the volume data measure
 *
 *  @return The EQNetworkType of the measure
 */
- (EQNetworkType)networkType;

/**
 *  Give the number of bytes downloaded during the measure
 *
 *  @return The volume downloaded (in bytes)
 */
- (unsigned long long)downloadedBytes;

/**
 *  Give the number of bytes uploaded during the measure
 *
 *  @return The volume uploaded (in bytes)
 */
- (unsigned long long)uploadedBytes;

@end
