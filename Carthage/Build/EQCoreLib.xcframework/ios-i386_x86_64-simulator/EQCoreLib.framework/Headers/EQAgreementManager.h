//
//  EQAgreementManager.h
//  EQCoreLib
//
//  Created by David Rodrigues on 18/10/2018.
//  Copyright (c) 2018 V3D. All rights reserved.
//

#import <EQCoreLib/EQManagerInterface.h>

@protocol EQAgreementManager <EQManagerInterface>

- (NSInteger)licenseVersion;
- (BOOL)hasLicenseUpdate:(NSInteger)licenseVersion;
- (void)updateLicenseVersion:(NSInteger)licenseVersion;

- (NSInteger)privacyVersion;
- (BOOL)hasPrivacyUpdate:(NSInteger)privacyVersion;
- (void)updatePrivacyVersion:(NSInteger)privacyVersion;

@end
