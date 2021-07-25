//
//  EQLogMacros.h
//  Logger
//
//  Created by David Rodrigues on 7/28/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

#import <Foundation/NSString.h>

#ifndef Logger_EQLogMacros_h
#define Logger_EQLogMacros_h

typedef NS_OPTIONS(NSUInteger, EQLogFlag) {
    EQLogFlagError      = (1 << 0), /** 0...00001 */
    EQLogFlagWarning    = (1 << 1), /** 0...00010 */
    EQLogFlagInfo       = (1 << 2), /** 0...00100 */
    EQLogFlagDebug      = (1 << 3), /** 0...01000 */
    EQLogFlagVerbose    = (1 << 4)  /** 0...10000 */
};

typedef NS_ENUM(NSUInteger, EQLogLevel) {
    EQLogLevelOff     = 0,                                      /** No logs */
    EQLogLevelError   = (EQLogFlagError),                       /** Log error messages (0...00001) */
    EQLogLevelWarning = (EQLogLevelError   | EQLogFlagWarning), /** Log error & warning messages (0...00011) */
    EQLogLevelInfo    = (EQLogLevelWarning | EQLogFlagInfo),    /** Log error, warning & info messages (0...00111) */
    EQLogLevelDebug   = (EQLogLevelInfo    | EQLogFlagDebug),   /** Log error, warning, info & debug messages (0...01111) */
    EQLogLevelVerbose = (EQLogLevelDebug   | EQLogFlagVerbose), /** Log error, warning, info, debug & verbose messages (0...11111) */
    EQLogLevelAll     = NSUIntegerMax,                          /** EQLogLevelVerbose plus any other flags (1111....11111) */
    EQLogLevelDefault = EQLogLevelOff                           /** Default log level */
};


@interface EQLogMacros : NSObject

+ (void)logWithFlag:(EQLogFlag)flag
               file:(const char *)file
           function:(const char *)function
               line:(NSUInteger)line
             format:(NSString *)format, ... NS_FORMAT_FUNCTION(5, 6);

@end

/**
 * This is the single macro that all other macros below compile into.
 * This big multiline macro makes all the other macros easier to read.
 **/
#define LOG_MACRO(flg, fnct, frmt, ...) [EQLogMacros logWithFlag:flg file:__FILE__ function:fnct line:__LINE__ format:(frmt), ## __VA_ARGS__]


/**
 * Ready to use log macros with no context or tag.
 **/
#define EQLogError(frmt, ...)   do { LOG_MACRO(EQLogFlagError, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__); } while(0)
#define EQLogWarn(frmt, ...)    do { LOG_MACRO(EQLogFlagWarning, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__); } while(0)
#define EQLogInfo(frmt, ...)    do { LOG_MACRO(EQLogFlagInfo, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__); } while(0)
#define EQLogDebug(frmt, ...)   do { LOG_MACRO(EQLogFlagDebug, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__); } while(0)
#define EQLogVerbose(frmt, ...) do { LOG_MACRO(EQLogFlagVerbose, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__); } while(0)

#endif
