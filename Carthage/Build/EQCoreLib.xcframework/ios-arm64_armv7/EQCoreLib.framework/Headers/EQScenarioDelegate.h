//
//  EQScenarioDelegate.h
//  EQCoreLib
//
//  Created by David RODRIGUES on 26/04/16.
//  Copyright © 2016 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQScenarioStatus.h>
#import <EQCoreLib/EQData.h>

@class EQScenario;
@class EQStepConfiguration;

@protocol EQScenarioDelegate <NSObject>

@optional

- (void)scenarioWillStart:(EQScenario * _Nullable)scenario;
- (void)scenario:(EQScenario * _Nullable)scenario willStartIteration:(NSUInteger)iteration;
- (void)scenario:(EQScenario * _Nullable)scenario willStartStep:(EQStepConfiguration * _Nonnull)stepConfiguration;
- (void)scenario:(EQScenario * _Nullable)scenario didFinishStep:(EQStepConfiguration * _Nonnull)stepConfiguration data:(id<EQData> _Nullable)data status:(EQScenarioStatus)status;
- (void)scenario:(EQScenario * _Nullable)scenario didFinishIteration:(NSUInteger)iteration;
- (void)scenario:(EQScenario * _Nullable)scenario didFinishWithStatus:(EQScenarioStatus)status;

@end
