//
//  EQError.h
//  EQCoreLib
//
//  Created by Sébastien MIZRAHI on 31/01/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQErrorsConstants.h>

@interface EQError : NSObject {
    
}

@property (nonatomic) NSInteger code;
@property (nonatomic, strong) NSString *desc;
@property (nonatomic, getter = isTechnical) BOOL technical;

+ (instancetype)errorWithCode:(NSInteger)code message:(NSString *)message;
- (id) initError: (NSString *) errDescription code:(NSInteger) errCode isTechnical:(BOOL) errIsTechnical;
- (id) initTechnicalErrorWithDescription: (NSString *) errDescription;
- (id) initFunctionalErrorWithDescription: (NSString *) errDescription;
- (id) initTechnicalErrorWithDescription: (NSString *) errDescription andCode:(NSInteger) errCode;
- (id) initFunctionalErrorWithDescription: (NSString *) errDescription andCode:(NSInteger) errCode;
- (id) initTechnicalWithNSError:(NSError *) error;
- (id) initFunctionallWithNSError:(NSError *) error;
- (id) initWithNSError:(NSError *) error isTechnical:(BOOL) errIsTechnical;

@end
