//
//  HandsFreeCubeUserInterface.h
//  EQCoreLib
//
//  Created by Sébastien MIZRAHI on 13/09/2016.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQCube.h>
#import <EQCoreLib/EQHandsFreeResults.h>

static NSString * const kHandsFreeCubeNameUserInterface = @"HANDS_FREE_UI";

@interface EQHandsFreeCubeUserInterface : EQCube
/*
 * UI_HFU_AND_001 / UI_HFU_IOS_001
 * Cube API to retrieve hands free count for voice call, per hands free type
 *
 * @param dateFilter The date filter query e.g. 'date > timestamp'
 *
 * @return A Hands free results (count per hands free type)
 */
- (EQHandsFreeResults *) handsFreeResults:(NSString *) dateFilter;
@end
