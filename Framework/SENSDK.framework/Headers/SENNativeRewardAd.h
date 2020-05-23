//
//  SENBGAd.h
//  SENSDK
//
//  Created by luochao on 2019/4/10.
//  Copyright © 2019 luochao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SENNativeRewardAd : NSObject
/** offerid */
@property (nonatomic, copy) NSString *offerid;
/** campaignid */
@property (nonatomic, copy) NSString *campaignid;
/** 横屏在线视频地址  */
@property (nonatomic, copy) NSString *ige_landscape_online_url;
/** 横屏离线视频地址  */
@property (nonatomic, copy) NSString *ige_landscape_offline_url;
/** 竖屏离线资源md5  */
@property (nonatomic, copy) NSString *ige_portrait_md5;
/** 横屏视频封面  */
@property (nonatomic, copy) NSString *ige_landscape_video_cover_url;
/** app类型 */
@property (nonatomic, copy) NSString *category;
/** 竖屏在线视频地址  */
@property (nonatomic, copy) NSString *ige_portrait_online_url;
/** 竖屏离线视频地址  */
@property (nonatomic, copy) NSString *ige_portrait_offline_url;
/** 竖屏离线资源md5  */
@property (nonatomic, copy) NSString *ige_landscape_md5;
/** 竖屏视频封面  */
@property (nonatomic, copy) NSString *ige_portrait_video_cover_url;

@property (nonatomic, copy) NSString *cover;

@property (nonatomic, copy) NSString *icon;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, assign) NSInteger downloads;

@property (nonatomic, assign) float rate;

@property (nonatomic, copy) NSString *des;

+ (NSArray<SENNativeRewardAd *> *)bgADWith:(NSArray *)arr;

@end

NS_ASSUME_NONNULL_END
