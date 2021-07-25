//
//  EQScoringStepConfiguration.h
//  EQCoreLib
//
//  Created by David RODRIGUES (V3D) on 08/03/2017.
//  Copyright © 2017 V3D. All rights reserved.
//

#import <EQCoreLib/EQCoreLib.h>

@interface EQScoringStepConfiguration : EQMScoreStepConfiguration

/**
 The constant bit rate of the test

 @return The CBR value
 */
- (long)constantBitRate;

/**
 The variable bit rate of the test

 @return The VBR value
 */
- (long)variableBitRate;

/**
 The variable bit rate percentage of the test

 @return The VBR percentage value
 */
- (double)variableBitRatePercentage;

@end
