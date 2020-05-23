//
//  SENWallADDelegate.h
//  Flappy Bird
//
//  Created by luochao on 2018/11/20.
//  Copyright © 2018 Agney Patel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SENError.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SENWallADDelegate <NSObject>


/**
 广告墙可用性发生变化回调
 
 @param placementId placementId
 @param isAvailable 广告墙是否可用：true-可用  false-不可用
 @param error isAvailable为false对应的错误信息
 */
- (void)onAdWallAvailabilityChangedWith:(NSString *)placementId
                            isAvailable:(BOOL)isAvailable
                                  error:(SENError *)error;

/**
 广告墙被打开
 
 @param placementId placementId
 */
- (void)onAdWallOpenedWith:(NSString *)placementId;

/**
 用户在广告墙内获得奖励
 
 @param placementId placementId
 @param amount 奖励金额
 @param unit 奖励单位
 */
- (void)onWallRewardedAdRewardedWith:(NSString *)placementId
                              amount:(NSInteger)amount
                                unit:(NSString *)unit;

/**
 广告墙展示失败
 
 @param placementId placementId
 @param error 展示失败对应的错误信息
 */
- (void)onAdWallShowFailed:(NSString *)placementId
                     error:(SENError *)error;

/**
 广告墙被关闭
 
 @param placementId placementId
 */
- (void)onAdWallClosedWith:(NSString *)placementId;


@end

NS_ASSUME_NONNULL_END
