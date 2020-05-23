//
//  SENError.h
//  Flappy Bird
//
//  Created by luochao on 2018/11/20.
//  Copyright © 2018 Agney Patel. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, SENADErrorCode)
{
    //token未设置
    SEN_ERROR_CODE_TOKEN_NOT_SET = 1001,
    //配置拉取失败
    SEN_ERROR_CODE_NO_CONFIGURATION_AVAILABLE,
    //广告被关闭
    SEN_ERROR_CODE_TOKEN_IS_CLOSED,
    //PID关闭
    SEN_ERROR_CODE_PLACEMENT_IS_CLOSED,
    //pid到频控
    SEN_ERROR_REACHED_CAP_LIMIT_PER_PLACEMENT,
    //无可用广告
    SEN_ERROR_CODE_NO_ADS_TO_DISPLAY,
    //offer过了有效期
    SEN_ERROR_CODE_AD_OUT_OF_VALIDITY,
    //video加载失败
    SEN_ERROR_CODE_AD_LOAD_FAIL,
    //PRELOAD太频繁
    SEN_ERROR_CODE_AD_PRELOAD_FREQUENTLY,
    //offer展示到达频控限制
    SEN_ERROR_CODE_AD_OVER_FREQUENC,
    //已经获得奖励
    SEN_ERROR_CODE_AD_GET_REWARDED,
};

@interface SENError : NSObject

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *desc;

@end

NS_ASSUME_NONNULL_END

