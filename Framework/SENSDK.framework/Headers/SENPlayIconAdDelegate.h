//
//  SENPlayIconAdDelegate.h
//  SENSDK
//
//  Created by luochao on 2018/12/18.
//  Copyright © 2018 luochao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SENError.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SENPlayIconAdDelegate <NSObject>

/**
 playIcon可用性发生变化

 @param placementId placementId
 @param isAvailable playIcon是否可用：true-可用 false-不可用
 @param error isAvailable为false对应的错误信息
 */
- (void)onPlayIconAdAvailabilityChanged:(NSString *)placementId
                                isAvailable:(BOOL)isAvailable
                                      error:(SENError *)error;

/**
 playIcon被展示

 @param placementId placementId
 */
- (void)onPlayIconAdDisplayed:(NSString *)placementId;

/**
 playIcon展示失败

 @param placementId placementId
 @param error 展示失败对应的错误信息
 */
- (void)onPlayIconAdDisplayFailed:(NSString *)placementId
                            error:(SENError *)error;
/**
 playIcon被点击

 @param placementId placementId
 */
- (void)onPlayIconAdClicked:(NSString *)placementId;
/**
 playIcon被关闭

 @param placementId placementId
 */
- (void)onPlayIconAdHided:(NSString *)placementId;


- (void)onPlayIconCloseIGE:(NSString *)placementId;

@end

NS_ASSUME_NONNULL_END
