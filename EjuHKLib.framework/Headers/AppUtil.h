//
//  AppUtil.h
//  ShiHui
//
//  Created by Fane on 2018/11/21.
//  Copyright © 2018 ShiHui. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MBProgressHUD/MBProgressHUD.h>

NS_ASSUME_NONNULL_BEGIN

@interface AppUtil : NSObject


/**
 UI工具
 */

///显示一个提醒hud
+ (void)hudWithMsg:(NSString*)msg;
///在view上显示一个提醒hud
+(void)hudWithMsg:(NSString*)msg At:(UIView*)view;

//实例化一个hud,自己处理隐藏
+ (MBProgressHUD*)showHudWithTitle:(NSString*)title;

///根据view获取controller
+ (UIViewController *)findViewController:(UIView *)sourceView;


///状态栏高度
+ (CGFloat)statusbarHeight;

///导航栏的高度 iphoneX 44+44, 其他设备20+44
+ (CGFloat)navigationBarHeight;

///底部tabBar的高度,iphoneX 49+34 其他设备49
+ (CGFloat)tabBarHeight;

/// iPhoneX 底部home indicator高度
+ (CGFloat)homeIndicatorHeight;



/**
 系统信息
 */

//设备的idfa
+ (NSString *)getIDFA;


///获取设备id信息
+(NSString *)getDeviceid;
///拨打电话
+(void)telWithPhoneNum:(NSString *)phoneNum;
///获取日期
+(NSString *)dateStringWithInterval:(NSTimeInterval )Interval dateFormat:(NSString *)dateFormat;
//根据时间戳获取日期
+(NSString *)dateStringWithTime:(NSString *)reportTime dateFormat:(NSString *)dateFormat;
///根据 时间戳 获取日期字符串
+ (NSString *)stringWithTimestamp:(long long)timestamp dateFormat:(NSString *)fmt;

//获取当前的vc
+ (UIViewController*)getCurrentVC;

@end

NS_ASSUME_NONNULL_END
