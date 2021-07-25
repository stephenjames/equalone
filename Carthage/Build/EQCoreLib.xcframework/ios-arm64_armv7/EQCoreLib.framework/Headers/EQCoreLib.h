//
//  EQCoreLib.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/01/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <EQCoreLib/EQCore.h>
#import <EQCoreLib/EQError.h>

#import <EQCoreLib/EQUtilities.h>
#import <EQCoreLib/DispatchMainThread.h>

#if PRIVATE_EQ1

#pragma mark - Old EQ1 import

#import <EQCoreLib/NSString+localizedString.h>
#import <EQCoreLib/EQDisplayVCProtocol.h>
#import <EQCoreLib/EQMessage.h>

#endif

#pragma mark - Public APIs

#import <EQCoreLib/EQCube.h>
#import <EQCoreLib/EQManagerInterface.h>
#import <EQCoreLib/EQScenarioManager.h>
#import <EQCoreLib/EQSpoolerManager.h>
#import <EQCoreLib/EQLogManager.h>
#import <EQCoreLib/EQUserPreferencesManager.h>
#import <EQCoreLib/EQAgentInformationManager.h>
#import <EQCoreLib/EQTicketManager.h>
#import <EQCoreLib/EQBackgroundManager.h>
#import <EQCoreLib/EQBootManager.h>
#import <EQCoreLib/EQSurveyManager.h>
#import <EQCoreLib/EQMessageManager.h>

#import <EQCoreLib/EQDQAIDGenerationDelegate.h>
#import <EQCoreLib/EQAgentUpdateAvailableDelegate.h>
#import <EQCoreLib/EQSurveyDelegate.h>
#import <EQCoreLib/EQSpoolerServiceProtocol.h>
#import <EQCoreLib/EQUpdateConfigDelegate.h>
#import <EQCoreLib/EQBackgroundServiceDelegate.h>
#import <EQCoreLib/EQLogManager.h>

#import <EQCoreLib/EQLogServiceProtocol.h>
#import <EQCoreLib/EQCouponDelegate.h>

#import <EQCoreLib/EQDataManager.h>
#import <EQCoreLib/EQDataDelegate.h>
#import <EQCoreLib/EQDataLimitDelegate.h>

#import <EQCoreLib/EQBattery.h>
#import <EQCoreLib/EQData.h>
#import <EQCoreLib/EQLocation.h>
#import <EQCoreLib/EQRadio.h>
#import <EQCoreLib/EQSim.h>
#import <EQCoreLib/EQWiFi.h>

#import <EQCoreLib/EQHttpData.h>
#import <EQCoreLib/EQShooterData.h>
#import <EQCoreLib/EQWebData.h>
#import <EQCoreLib/EQVideoData.h>
#import <EQCoreLib/EQVoiceData.h>
#import <EQCoreLib/EQApplicationData.h>
#import <EQCoreLib/EQVolumeData.h>

#import <EQCoreLib/EQHttpStepConfiguration.h>
#import <EQCoreLib/EQWebStepConfiguration.h>
#import <EQCoreLib/EQVideoStepConfiguration.h>
#import <EQCoreLib/EQPauseStepConfiguration.h>
#import <EQCoreLib/EQSpoolerStepConfiguration.h>
#import <EQCoreLib/EQShooterStepConfiguration.h>
#import <EQCoreLib/EQScoringStepConfiguration.h>

#import <EQCoreLib/EQSQLiteColumn+Additions.h>
#import <EQCoreLib/EQSumFunction.h>
#import <EQCoreLib/EQSingleDateDimension.h>
#import <EQCoreLib/EQQuadKeyDimension.h>
#import <EQCoreLib/EQDateFilter.h>
#import <EQCoreLib/EQSetFunction.h>
#import <EQCoreLib/EQDateValue.h>

#import <EQCoreLib/EQTileSystem.h>


#pragma mark - Public Enums

#import <EQCoreLib/EQBusinessService.h>
#import <EQCoreLib/EQBusinessServiceMode.h>
#import <EQCoreLib/EQCallDirection.h>
#import <EQCoreLib/EQCallStatus.h>
#import <EQCoreLib/EQDataStatus.h>
#import <EQCoreLib/EQDataTerminaisonCode.h>
#import <EQCoreLib/EQDirection.h>
#import <EQCoreLib/EQEndId.h>
#import <EQCoreLib/EQLocationProvider.h>
#import <EQCoreLib/EQLocationStatus.h>
#import <EQCoreLib/EQNetworkStatus.h>
#import <EQCoreLib/EQNetworkTechnology.h>
#import <EQCoreLib/EQRadioBearer.h>
#import <EQCoreLib/EQRttType.h>
#import <EQCoreLib/EQWiFiStatus.h>
#import <EQCoreLib/EQLicenseGenerationError.h>
#import <EQCoreLib/EQActivityConfidence.h>
#import <EQCoreLib/EQActivityType.h>
#import <EQCoreLib/EQCoverageData.h>
#import <EQCoreLib/EQDataSessionData.h>
#import <EQCoreLib/EQHandsFreeCallState.h>
#import <EQCoreLib/EQHandsFreeCubeUserInterface.h>
#import <EQCoreLib/EQHandsFreeProximityState.h>
#import <EQCoreLib/EQHandsFreeState.h>
#import <EQCoreLib/EQIshoData.h>
#import <EQCoreLib/EQMaxFunction.h>
#import <EQCoreLib/EQNetstatData.h>
#import <EQCoreLib/EQNetworkNorm.h>
#import <EQCoreLib/EQIdleDatacollect.h>


@interface EQCoreLib : NSObject
    
+ (NSBundle *)frameworkBundle;
    
@end
