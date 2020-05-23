//
//  SENADSDKDelegate.h
//  Flappy Bird
//
//  Created by luochao on 2018/10/8.
//  Copyright © 2018年 Agney Patel. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SENADSDKDelegate <NSObject>

/**
 SDK初始化结果回调
 
 @param isSuccess init result
 @param error isSuccess为false error为失败的错误信息
 */
- (void)onSDKInitResult:(BOOL)isSuccess
                  error:(SENError *)error;

@optional
/**
 placementId 被关闭
 */
- (void)onPlacementIdClose;

/**
 广告被关闭回调

 @param placementId placementId
 */
- (void)onCloseAdWith:(NSString *)placementId;

@end

