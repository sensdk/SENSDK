//
//  SENADSDKDelegate.h
//  Flappy Bird
//
//  Created by luochao on 2018/10/8.
//  Copyright © 2018年 Agney Patel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SENError.h"

@protocol SENRewardADDelegate <NSObject>

/**
 视频广告被打开
 
 @param placementId placementId
 */
- (void)onRewardedAdOpenedWith:(NSString *)placementId;
/**
 视频广告被关闭
 
 @param placementId placementId
 */
- (void)onRewardedAdClosedWith:(NSString *)placementId;
/**
 激励视频可用性发生变化
 
 @param placementId placementId
 @param isAvailable isAvailable 广告墙是否可用：true-可用  false-不可用
 @param error error isAvailable为false对应的错误信息
 */
- (void)onRewardedAdAvailabilityChangedWith:(NSString *)placementId
                                isAvailable:(BOOL)isAvailable
                                      error:(SENError *)error;

/**
 用户获得奖励
 
 @param placementId placementId
 @param amount 奖励金额
 @param unit 奖励单位
 */
- (void)onRewardedAdRewardedWith:(NSString *)placementId
                          amount:(NSInteger)amount
                            unit:(NSString *)unit;

/**
 视频广告展示失败
 
 @param placementId placementId
 @param error fail reason
 */
- (void)onRewardedAdShowFailedWith:(NSString *)placementId
                             error:(SENError *)error;

/**
 click download
 
 @param placementId placementId
 */
- (void)onRewardedAdClickedWith:(NSString *)placementId;

/**
 onRewardedAdStartedWith
 
 @param placementId video play
 */
- (void)onRewardedAdStartedWith:(NSString *)placementId;


/**
 onRewardedAdEndedWith
 
 @param placementId view ad complete
 */
- (void)onRewardedAdEndedWith:(NSString *)placementId;




@end
