//
//  SENInterstitialDelegate.h
//  SENSDK
//
//  Created by 骆超 on 2019/10/10.
//  Copyright © 2019 骆超. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SENInterstitialDelegate <NSObject>


/**
 插屏广告被打开
 
 @param placementId placementId
 */
- (void)onInterstitialOpenedWith:(NSString *)placementId;

/**
 插屏广告被关闭
 
 @param placementId placementId
 */
- (void)onInterstitialClosedWith:(NSString *)placementId;

/**
 插屏广告可用性发生变化
 
 @param placementId placementId
 @param isAvailable isAvailable 插屏广告是否可用：true-可用  false-不可用
 @param error error isAvailable为false对应的错误信息
 */
- (void)onInterstitialAvailabilityChangedWith:(NSString *)placementId
                                  isAvailable:(BOOL)isAvailable
                                        error:(SENError *)error;


/**
 插屏广告展示失败
 
 @param placementId placementId
 @param error fail reason
 */
- (void)onInterstitialShowFailedWith:(NSString *)placementId
                             error:(SENError *)error;

/**
 click download
 
 @param placementId placementId
 */
- (void)onInterstitialClickedWith:(NSString *)placementId;

/**
 onInterstitialStartedWith
 
 @param placementId video play
 */
- (void)onInterstitialStartedWith:(NSString *)placementId;


/**
 onInterstitialEndedWith
 
 @param placementId view ad complete
 */
- (void)onInterstitialEndedWith:(NSString *)placementId;



@end

NS_ASSUME_NONNULL_END
