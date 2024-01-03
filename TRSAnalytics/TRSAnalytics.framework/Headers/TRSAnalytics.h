//
//  TRSAnalytics.h
//  TRS_SDK
//
//  Created by 824810056 on 2018/1/16.
//  Copyright © 2018年 牟松. All rights reserved.
//  本文件提供了SDK的初始化方法及相关参数设置方法

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TRSAnalytics : NSObject

/**
 * 初始化网脉组件产品
 * @param appKey   开发者在网脉官网申请的appKey
 * @param appID     开发者在网脉官网申请的appID
 * @param staticURL     网脉统计地址
 * @param deviceID 设备ID
 * @param channel 渠道标识，可设置nil表示"App Store".
 * @param attributes 自定义信息   注* 旧设备标识信息以key/value的形式放到该参数中，key = oldDeviceID，如果key传错，将收集不到
                                  个像设备标识信息以key/value的形式放到该参数中，key = gxDeviceID，如果key传错，将收集不到
 */
+ (void)startWithAppKey:(NSString *)appKey
                  appID:(NSString *)appID
              staticURL:(NSString *)staticURL
               deviceID:(nullable NSString *)deviceID
                channel:(nullable NSString *)channel
             attributes:(nullable NSDictionary *)attributes;

/**
 * 仅用于在Flutter项目中SDK初始化晚了未响应应用生命周期通知，手动开启运行上报
 * 默认不需要额外调用本代码
 */
+ (void)flutterDoAnalytics;

/** 设置是否在console输出sdk的log信息.
 @param logEnable 默认NO(不输出log); 设置为YES, 输出可供调试参考的log信息. 发布产品时必须设置为NO.
 */
+ (void)setLogEnable:(BOOL)logEnable;

/**
 * 设置是否切换到debug模式
 * @param debugEnable  默认NO(非debug模式)；设置为YES在debug模式下数据会逐条发送，并可实时在网脉分析端查看
 */
+ (void)setDebugEnable:(BOOL)debugEnable;

/** 
 * 设置是否对传输数据内容进行加密, 默认NO(不加密).
 * ⚠️⚠️⚠️ 烦请先与项目上确认网脉后端是否支持加密，否则可能引起上报数据不能正常解析。
 @param encryptEnable 设置为YES,  SDK 会将数据内容做加密处理
 */
+ (void)setEncryptEnable:(BOOL)encryptEnable;

/**
 * 设置经纬度信息
 * @param longitude 经度
 * @param latitude 纬度
 */
+ (void)setLongitude:(nullable NSString *)longitude latitude:(nullable NSString *)latitude;

/**
 * 获取网脉设备码
 */
+ (NSString *)uuid;

#pragma mark - 数据统计

/**
 * 进入页面调用
 * @param pageName 自定义页面名称
 */
+ (void)pageBegin:(NSString *)pageName;

/**
 * 离开页面调用
 * @param pageName 自定义页面名称
 */
+ (void)pageEnd:(NSString *)pageName;

/**
 * 离开页面调用
 * @param pageName 自定义页面名称
 * @param properties 其他页面相关信息 注* 相关字段见文档
 */
+ (void)pageEnd:(NSString *)pageName properties:(nullable NSDictionary *)properties;

/**
 * 事件方法
 * @param eventCode 事件编号
 */
+ (void)event:(NSString *)eventCode;

/**
 * 事件方法
 * @param eventCode 事件编号
 * @param properties 事件其他相关信息 注* 相关字段见文档
 */
+ (void)event:(NSString *)eventCode properties:(nullable NSDictionary *)properties;

#pragma mark - 用户相关

/**
 * 登录方法
 * @param info 用户信息  注目前用户模块只支持用户名（se_un）和用户ID（uid）两个字段
 */
+ (void)login:(NSDictionary *)info;

/**
 * 修改用户信息
 * @param info 用户信息  注目前用户模块只支持用户名（se_un）和用户ID（uid）两个字段
 */
+ (void)modifyUserInfo:(NSDictionary *)info;

/**
 * 退出方法
 */
+ (void)logout;

@end

NS_ASSUME_NONNULL_END

