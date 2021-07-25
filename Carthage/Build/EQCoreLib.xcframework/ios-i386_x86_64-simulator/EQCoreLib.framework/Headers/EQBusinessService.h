//
//  EQBusinessService.h
//  EQCoreLib
//
//  Created by David Rodrigues on 30/04/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

typedef NS_ENUM(NSInteger, EQBusinessService) {
    EQBusinessServiceUnknown = -1,
    EQBusinessServiceHttp = 0,
    EQBusinessServiceWeb = 1,
    EQBusinessServiceVideo = 2,
    EQBusinessServiceData = 3,
    EQBusinessServiceNetstat = 4,
    EQBusinessServiceVoice = 5,
    EQBusinessServiceTbq __deprecated_enum_msg("TBQ is now deprecated. Use EQBusinessServiceEventQuestionnaire.") = 6,
    EQBusinessServiceIsho = 7,
    EQBusinessServiceComlink = 8,
    EQBusinessServiceApplication = 9,
    EQBusinessServiceSms = 10,
    EQBusinessServiceConnection = 11,
    EQBusinessServiceMail = 12,
    EQBusinessServicePing = 13,
    EQBusinessServiceCoverageRssi = 14,
    EQBusinessServiceFtp = 15,
    EQBusinessServiceMms = 16,
    EQBusinessServiceDataApp = 17,
    EQBusinessServiceAgentUpdate = 18,
    EQBusinessServiceSurvey = 19,
    EQBusinessServiceBoot = 20,
    EQBusinessServiceTicket = 21,
    EQBusinessServiceTbm = 22,
    EQBusinessServiceMSISDNEnrichment = 23,
    EQBusinessServiceApplications = 24,
    EQBusinessServiceVolume = 25,
    EQBusinessServiceBattery = 26,
    EQBusinessServiceChainedTests = 27,
    EQBusinessServiceShooter = 28,
	EQBusinessServiceHandsFree = 29,
    EQBusinessServiceMetrics = 30,
    EQBusinessServiceEventQuestionnaire = 31,
    EQBusinessServiceScoring = 32
};

#define kFirstBusinessService   EQBusinessServiceHttp
#define kLastBusinessService    EQBusinessServiceScoring
