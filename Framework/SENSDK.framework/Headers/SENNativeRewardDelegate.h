//
//  SENBGRequestDelegate.h
//  SENSDK
//
//  Created by luochao on 2019/4/10.
//  Copyright © 2019 luochao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SENNativeRewardAd.h"
#import "SENError.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SENNativeRewardDelegate <NSObject>

/**
 请求成功
 
 @param ads 返回的数据
 @param placementId placementId
 */
- (void)onRequestSuccess:(NSArray<SENNativeRewardAd *> *)ads
             placementId:(NSString *)placementId;

/**
 请求失败
 
 @param error 对应的错误信息
 @param placementId placementId
 */
- (void)onRequestFail:(SENError *)error
          placementId:(NSString *)placementId;


/**
 展示失败

 @param error 失败原因及错误码
 @param placementId placementId
 */
- (void)onShowFail:(SENError *)error
       placementId:(NSString *)placementId;

/**
 用户获得奖励
 
 @param placementId placementId
 @param ad model
 @param amount 奖励金额
 @param unit 奖励单位
 */
- (void)onGetRewardedWith:(NSString *)placementId
                       ad:(SENNativeRewardAd *)ad
                   amount:(NSInteger)amount
                     unit:(NSString *)unit;


/**
 退出了广告页面

 @param placementId placementId
 @param ad ad model
 */
- (void)onAdCloseWith:(NSString *)placementId
                   ad:(SENNativeRewardAd *)ad;

@end

NS_ASSUME_NONNULL_END
