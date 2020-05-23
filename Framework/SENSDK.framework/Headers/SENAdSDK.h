//
//  SENAdSDK.h
//  Flappy Bird
//
//  Created by luochao on 2018/10/8.
//  Copyright © 2018年 Agney Patel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SENRewardADDelegate.h"
#import "SENWallADDelegate.h"
#import "SENADSDKDelegate.h"
#import "SENPlayIconAdDelegate.h"
#import "SENNativeRewardDelegate.h"
#import "SENInterstitialDelegate.h"
#import <UIKit/UIKit.h>
#import "SENNativeRewardAd.h"

typedef NS_ENUM(NSInteger, SENBgResourceOrientation) {
    SENNativeRewardResourceLandscape = 0,
    SENNativeRewardResourcePortrait,
    SENNativeRewardResourceBoth
};

@interface SENAdSDK : NSObject

@property (nonatomic, assign) BOOL debugEable;
@property (nonatomic, assign) BOOL gdprEnable;
@property (nonatomic, copy) NSString *appKey;
@property (nonatomic, copy) NSString *userId;

@property (nonatomic, assign, readonly) UIInterfaceOrientation originalOrientation;

@property (nonatomic, weak) id<SENADSDKDelegate> adDelegate;
@property (nonatomic, weak) id<SENNativeRewardDelegate> nativeRewardDelegate;
@property (nonatomic, weak) id<SENPlayIconAdDelegate> playIconAdDelegate;
@property (nonatomic, weak) id<SENRewardADDelegate> rewardAdDelegate;
@property (nonatomic, weak) id<SENWallADDelegate> wallAdDelegate;
@property (nonatomic, weak) id<SENInterstitialDelegate> interstitialDelegate;


+ (instancetype)sharedInstance;

- (void)setUserId:(NSString *)userId;

/**
 init sen SDK
 
 @param appkey appkey
 */
- (void)resgistWithAppkey:(NSString *)appkey;

/**
 preload ad
 
 @param placementId placementId
 */
- (void)preloadADWith:(NSString *)placementId;


/**
 preload ad

 @param placementId placementId
 @param ads_num 针对native广告可以设置每次拉取的ad数量
 @param resourceOrientation 对于native广告可以指定拉取资源的屏幕方向
 SENNativeRewardResourceLandscape 为横屏
 SENNativeRewardResourcePortrait 为竖屏
 SENNativeRewardResourceBoth  不指定资源方向
 */
- (void)preloadADWith:(NSString *)placementId
                count:(NSInteger)ads_num
  resourceOrientation:(SENBgResourceOrientation)resourceOrientation;


- (BOOL)isAdCachedForplacementId:(NSString *)placementId;

/**
 show ad
 
 @param currentVC current viewcontroller
 @param placementId placementId
 */
- (void)showADWith:(UIViewController *)currentVC
       placementId:(NSString *)placementId;


/**
 show ad play icon
 
 @param currentVC current viewcontroller
 @param placementId placementId
 @param frame play icon frame
 @param angle play icon rotation angle
 */
- (void)showADWith:(UIViewController *)currentVC
       placementId:(NSString *)placementId
             frame:(CGRect)frame
             angle:(NSInteger)angle;

/**
 show native ad

 @param currentVC current viewcontroller
 @param placementId placementId
 @param ad native ad
 */
- (void)showNativeADWith:(UIViewController *)currentVC
             placementId:(NSString *)placementId
                      ad:(SENNativeRewardAd *)ad;


/**
 close play icon
 
 @param placementId placementId
 */
- (void)closePlayIconAdWith:(NSString *)placementId;


/**
 changePlayIconVisiable

 @param isVisiable isVisiable YES 可见  NO 不可见
 @param placementId placementId
 */
- (void)changePlayIconVisiable:(BOOL)isVisiable placementId:(NSString *)placementId;

@end
