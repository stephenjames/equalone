//
//  EQWebData.h
//  EQCoreLib
//
//  Created by David Rodrigues on 02/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <EQCoreLib/EQData.h>
#import <EQCoreLib/EQEndId.h>

@protocol EQWebData <EQData>

@required

/**
 *  Termination code for the Web event (WEB201)
 *
 *  @return Termination code for the Web event (WEB201)
 */
- (EQEndId)terminationCode;

/**
 *  Session time, duration of the Web event (WEB011)
 *
 *  @return Session time, duration of the Web event (WEB011)
 */
- (NSTimeInterval)sessionTime;

/**
 *  Volume downloaded in Bytes (WEB102)
 *
 *  @return Volume downloaded in Bytes (WEB102)
 */
- (unsigned long long)volumeDownloaded;

/**
 *  Volume uploaded in Bytes (WEB103)
 *
 *  @return Volume uploaded in Bytes (WEB103)
 */
- (unsigned long long)volumeUploaded;

/**
 *  The HTTP URL of the website loaded (WEB108)
 *
 *  @return The HTTP URL of the website loaded (WEB108)
 */
- (NSURL *)url;

/**
 *  Sum of Content-length for all objects in the HTML page downloaded (WEB101)
 *
 *  @return Sum of Content-length for all objects in the HTML page downloaded (WEB101)
 */
- (NSInteger)contentSize;

@end
