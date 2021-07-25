//
//  EQBootFlag.h
//  EQCoreLib
//
//  Created by David Rodrigues on 4/20/15.
//  Copyright (c) 2015 V3D. All rights reserved.
//

typedef NS_ENUM(NSUInteger, EQBootFlag) {
    EQBootFlagLicense,
    EQBootFlagStart,
    EQBootFlagKernelStart,
    EQBootFlagKernelStop,
    EQBootFlagOptIn,
    EQBootFlagOptOut,
    EQBootFlagConfigUpdate,
    EQBootFlagAgentUpdate,
    EQBootFlagAgentUpdateCancel,
    EQBootFlagConfigFailed,
    EQBootFlagLowMemory,
    EQBootFlagWifiModeEnabled,
    EQBootFlagWifiModeDisabled,
    EQBootFlagWifiModeKpiDeleted,
    EQBootFlagDenyDataCollect,
    EQBootFlagAcceptDataCollect,
    EQBootFlagSendLogsFailed,
    EQBootFlagReboot,
    EQBootFlagFreeze,
    EQBootFlagLocation,
    EQBootFlagSmsEnrichmentSucceeded,
    EQBootFlagSmsEnrichmentRefused,
    EQBootFlagSmsEnrichmentCanceled,
    EQBootFlagSmsEnrichmentFailed,
    EQBootBestUserTechnology,
    EQBootFlagUpdateCustomerInformation,
    EQBootFlagClusterID,
    EQBootFlagSimChanged,
    EQBootFlagPrivacyChanged,
    EQBootFlagLicenseChanged
};
