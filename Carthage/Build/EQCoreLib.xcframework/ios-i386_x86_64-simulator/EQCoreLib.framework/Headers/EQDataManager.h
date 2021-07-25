//
//  EQDataManager.h
//  EQCoreLib
//
//  Created by David Rodrigues on 30/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQManagerInterface.h>
#import <EQCoreLib/EQBusinessService.h>
#import <EQCoreLib/EQBusinessServiceMode.h>
#import <EQCoreLib/EQDataDelegate.h>
#import <EQCoreLib/EQDataLimitDelegate.h>
#import <EQCoreLib/EQPinPoint.h>

/**
 *  EQDataManager is an implementation of the EQManagerInterface. It provides methods to access the results stored in the EQual One on-device database. It also provides listeners with callbacks to warn the developer of a new result in the database.
 */
@protocol EQDataManager <EQManagerInterface>

@required

/**
 *  The Results API is interfaced through the EQDataManager. But unlike the other managers in the EQCore SDK, it can be enabled or disabled using the setEnabled method. The lifecycle of the EQDataManager is as such: • Instantiate EQDataManager: create the Results database, but do not start copying the measurements. • EQDataManager.setEnabled(true): start copying the measurements in the Results database • EQDataManager.setEnabled(false): stop copying the measurements in the Results database. This does not drop the database.
 *
 *  @param enabled True to enable the Results API, false to disable it.
 */
- (void)setEnabled:(BOOL)enabled;


/**
 *  Returns true if the EQDataManager is enabled, false if the EQDataManager is disabled
 *
 *  @return true if the EQDataManager is enabled, false if the EQDataManager is disabled
 */
- (BOOL)isEnabled;

#pragma mark - List methods

/**
 *  The list() method will query the KPI database and extract all the KPI’s that were captured by a given EQservice (e.g. VOICE) on a given EQServiceMode (e.g. SLM) for a specific period of time. It is possible to filter the results by dates and/or by location.
 *
 *  @param service     The service in which the requested KPI was captured
 *  @param serviceMode The mode of monitoring in which the requested KPI was captured
 *  @param ascending   Sets the order in which the results are returned. Ascending date by default (from oldest to most recent).
 *
 *  @return A list of EQData
 */
- (NSArray *)listForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode ascending:(BOOL)ascending error:(EQError **) error;

/**
 *  The list() method will query the KPI database and extract all the KPI’s that were captured by a given EQservice (e.g. VOICE) on a given EQServiceMode (e.g. SLM) for a specific period of time. It is possible to filter the results by dates and/or by location.
 *
 *  @param service     The service in which the requested KPI was captured
 *  @param serviceMode The mode of monitoring in which the requested KPI was captured
 *  @param ascending   Sets the order in which the results are returned. Ascending date by default (from oldest to most recent).
 *  @param startDate   The start date for the period
 *  @param endDate     The end date for the period
 *
 *  @return A list of EQData
 */
- (NSArray *)listForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode ascending:(BOOL)ascending startDate:(NSDate *)startDate endDate:(NSDate *)endDate error:(EQError **) error;

/**
 *  The list() method will query the KPI database and extract all the KPI’s that were captured by a given EQservice (e.g. VOICE) on a given EQServiceMode (e.g. SLM) for a specific period of time. It is possible to filter the results by dates and/or by location.
 *
 *  @param service          The service in which the requested KPI was captured
 *  @param serviceMode      The mode of monitoring in which the requested KPI was captured
 *  @param ascending        Sets the order in which the results are returned. Ascending date by default (from oldest to most recent).
 *  @param locationStart    Start point for the location interval
 *  @param locationEnd      End point for the location interval
 *
 *  @return A list of EQData
 */
- (NSArray *)listForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode ascending:(BOOL)ascending locationStart:(EQPinPoint *)locationStart locationEnd:(EQPinPoint *)locationEnd error:(EQError **) error;

/**
 *  The list() method will query the KPI database and extract all the KPI’s that were captured by a given EQservice (e.g. VOICE) on a given EQServiceMode (e.g. SLM) for a specific period of time. It is possible to filter the results by dates and/or by location.
 *
 *  @param service          The service in which the requested KPI was captured
 *  @param serviceMode      The mode of monitoring in which the requested KPI was captured
 *  @param ascending        Sets the order in which the results are returned. Ascending date by default (from oldest to most recent).
 *  @param startDate        The start date for the period
 *  @param endDate          The end date for the period
 *  @param locationStart    Start point for the location interval
 *  @param locationEnd      End point for the location interval
 *
 *  @return A list of EQData
 */
- (NSArray *)listForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode ascending:(BOOL)ascending startDate:(NSDate *)startDate endDate:(NSDate *)endDate locationStart:(EQPinPoint *)locationStart locationEnd:(EQPinPoint *)locationEnd error:(EQError **) error;

/**
 *  The list() method will query the KPI database and extract all the KPI’s that were captured by a given EQservice (e.g. VOICE) on a given EQServiceMode (e.g. SLM) for a specific period of time. It is possible to filter the results by dates and/or by location.
 *
 *  @param service      The service in which the requested KPI was captured
 *  @param serviceMode  The mode of monitoring in which the requested KPI was captured
 *  @param ascending    Sets the order in which the results are returned. Ascending date by default (from oldest to most recent).
 *  @param startIndex   Index of the first result from the list to return
 *  @param count        The number of results to return
 *
 *  @return A list of EQData
 */
- (NSArray *)listForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode ascending:(BOOL)ascending startIndex:(NSUInteger)startIndex count:(NSUInteger)count error:(EQError **) error;

/**
 *  The list() method will query the KPI database and extract all the KPI’s that were captured by a given EQservice (e.g. VOICE) on a given EQServiceMode (e.g. SLM) for a specific period of time. It is possible to filter the results by dates and/or by location.
 *
 *  @param service      The service in which the requested KPI was captured
 *  @param serviceMode  The mode of monitoring in which the requested KPI was captured
 *  @param ascending    Sets the order in which the results are returned. Ascending date by default (from oldest to most recent).
 *  @param startIndex   Index of the first result from the list to return
 *  @param count        The number of results to return
 *  @param startDate    The start date for the period
 *  @param endDate      The end date for the period
 *
 *  @return A list of EQData
 */
- (NSArray *)listForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode ascending:(BOOL)ascending startIndex:(NSUInteger)startIndex count:(NSUInteger)count startDate:(NSDate *)startDate endDate:(NSDate *)endDate error:(EQError **) error;

/**
 *  The list() method will query the KPI database and extract all the KPI’s that were captured by a given EQservice (e.g. VOICE) on a given EQServiceMode (e.g. SLM) for a specific period of time. It is possible to filter the results by dates and/or by location.
 *
 *  @param service          The service in which the requested KPI was captured
 *  @param serviceMode      The mode of monitoring in which the requested KPI was captured
 *  @param ascending        Sets the order in which the results are returned. Ascending date by default (from oldest to most recent).
 *  @param startIndex       Index of the first result from the list to return
 *  @param count            The number of results to return
 *  @param locationStart    Start point for the location interval
 *  @param locationEnd      End point for the location interval
 *
 *  @return A list of EQData
 */
- (NSArray *)listForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode ascending:(BOOL)ascending startIndex:(NSUInteger)startIndex count:(NSUInteger)count locationStart:(EQPinPoint *)locationStart locationEnd:(EQPinPoint *)locationEnd error:(EQError **) error;

/**
 *  The list() method will query the KPI database and extract all the KPI’s that were captured by a given EQservice (e.g. VOICE) on a given EQServiceMode (e.g. SLM) for a specific period of time. It is possible to filter the results by dates and/or by location.
 *
 *  @param service      The service in which the requested KPI was captured
 *  @param serviceMode  The mode of monitoring in which the requested KPI was captured
 *  @param ascending    Sets the order in which the results are returned. Ascending date by default (from oldest to most recent).
 *  @param startIndex   Index of the first result from the list to return
 *  @param count        The number of results to return
 *  @param startDate    The start date for the period
 *  @param endDate      The end date for the period
 *  @param locationStart    Start point for the location interval
 *  @param locationEnd      End point for the location interval
 *
 *  @return A list of EQData
 */
- (NSArray *)listForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode ascending:(BOOL)ascending startIndex:(NSUInteger)startIndex count:(NSUInteger)count startDate:(NSDate *)startDate endDate:(NSDate *)endDate locationStart:(EQPinPoint *)locationStart locationEnd:(EQPinPoint *)locationEnd error:(EQError **) error;

#pragma mark - Count methods

- (NSUInteger)countForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode;
- (NSUInteger)countForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode startDate:(NSDate *)startDate endDate:(NSDate *)endDate;
- (NSUInteger)countForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode locationStart:(EQPinPoint *)locationStart locationEnd:(EQPinPoint *)locationEnd;
- (NSUInteger)countForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode startDate:(NSDate *)startDate endDate:(NSDate *)endDate locationStart:(EQPinPoint *)locationStart locationEnd:(EQPinPoint *)locationEnd;

#pragma mark - Clear methods

- (BOOL)clearResult:(id<EQData>)data;
- (BOOL)clearResultsForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode;
- (BOOL)clearResultsForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode untilDate:(NSDate *)date;
- (BOOL)clearResultsUntilDate:(NSDate *)date;
- (BOOL)clearResults;

#pragma mark - Alert methods
#pragma mark EQDataDelegate

- (void)addDelegateForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode delegate:(id<EQDataDelegate>)delegate DEPRECATED_ATTRIBUTE;
- (void)addDelegateForServices:(NSArray *)services serviceMode:(EQBusinessServiceMode)serviceMode delegate:(id<EQDataDelegate>)delegate;
- (NSArray *)delegateForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode;
- (void)removeDelegateForService:(EQBusinessService)service serviceMode:(EQBusinessServiceMode)serviceMode DEPRECATED_ATTRIBUTE;
- (void)removeDelegate:(id<EQDataDelegate>)delegate;

#pragma mark EQDataLimitDelegate
- (void)setDataLimitDelegate:(id<EQDataLimitDelegate>)dataLimitDelegate;
- (void)setMininumStorageSize:(NSInteger)size;
- (NSInteger)minimumStorageSize;
- (void)setMininumStoragePercentage:(NSInteger)percentage;
- (NSInteger)minimumStoragePercentage;
- (void)setMaximumStorageTime:(NSInteger)days;
- (NSInteger)maximumStorageTime;

@end
