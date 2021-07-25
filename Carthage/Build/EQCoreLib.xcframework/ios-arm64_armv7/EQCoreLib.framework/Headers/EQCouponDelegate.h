//
//  EQCoupon.h
//  EQCoreLib
//
//  Created by Hervé Rilos on 18/07/14.
//  Copyright (c) 2014 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQError.h>

/**
 *  EQCoupon protocol. Delegates must implement it to receive coupon responses from EQCouponService
 */
@protocol EQCouponDelegate <NSObject>

@optional

/**
 *  Called when the coupon is submitted to the portal
 *
 */
- (void)onCouponSubmitted;

@required
/**
 *  Called when a coupon is validated by the server
 */
- (void)onCouponSuccess;

/**
 *  Called when a coupon is not validated by server
 *
 *  @param error An EQError. Will be filled with error message and code.
 */
- (void)onCouponError:(EQError *)error;

@end
