//
//  SHMacro.h
//  ShiHui
//
//  Created by Fane on 2018/11/20.
//  Copyright © 2018 ShiHui. All rights reserved.
//

#ifndef SHMacro_h
#define SHMacro_h
#import "HKThemeManager.h"
#import "UIColor+help.h"

//------------push-------------
///消息列表 报修/报事/环保
#define WorkOrderDetailPage         @"workorder"

///报修/报事/环保 工单详情
#define WorkOrderDetail         @"workorderdetail"


//-------------url-------------
//图片上传
#define ImageBaseUrl     @"http://test2.img.hiwemeet.com"


//Log
//解决xcode8以后真机调试不出log的问题
/** 地址拼接 */

#define ImageUrl(imageId)       ([NSString stringWithFormat:@"%@/pic/%@",ImageBaseUrl,imageId])
#define ImagePlaceholder        ([UIImage imageNamed:@"icon_placeholder"])

#ifdef DEBUG
#define NSLog(format, ...) printf("\n[%s] %s [第%d行] %s\n", __TIME__, __FUNCTION__, __LINE__, [[NSString stringWithFormat:format, ## __VA_ARGS__] UTF8String]);
#else
#define NSLog(format, ...) printf("\n[%s] %s [第%d行] %s\n", __TIME__, __FUNCTION__, __LINE__, [[NSString stringWithFormat:format, ## __VA_ARGS__] UTF8String]);
#endif

//thread
#define dispatch_safe_async_main(block)\
if ([NSThread isMainThread])\
{\
block();\
}\
else\
{\
dispatch_async(dispatch_get_main_queue(), block);\
}

//view
#define ScreenWidth         ([UIScreen mainScreen].bounds.size.width)
#define ScreenHeight        ([UIScreen mainScreen].bounds.size.height)


#define ViewBorderRadius(View,Radius,Width,Color)\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[(Color ? Color : [UIColor whiteColor]) CGColor]]

// Color
#define RGB(R, G, B)                        ([UIColor colorWithRed:R/255.0f green:G/255.0f blue:B/255.0f alpha:1.0f])
#define RGBA(R, G, B, A)                    ([UIColor colorWithRed:R/255.0f green:G/255.0f blue:B/255.0f alpha:A])

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define SepLineColor        UIColorFromRGB(0xe4e4e4)
#define DisableColor        UIColorFromRGB(0xA5ABC0)
#define TextRedColor        UIColorFromRGB(0xD0293A)
#define TextGreenColor      UIColorFromRGB(0x12BA2F)
#define BackgroundColor     UIColorFromRGB(0xf0f0f0)
#define TextColor333333     UIColorFromRGB(0x333333)
#define TextColor666666     UIColorFromRGB(0x666666)
#define TextColor999999     UIColorFromRGB(0x999999)
#define TextColorCCCCCC     UIColorFromRGB(0xCCCCCC)
#define ThemeColor          [UIColor colorWithHex:[HKThemeManager shareInstance].themeColor.themeColor]

#define IS_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
#define IS_iPhoneXsMax ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) : NO)

//font
#define PingFangSize(fSize)  [UIFont fontWithName:@"PingFangSC-Regular" size:fSize] ? : [UIFont systemFontOfSize:fSize]
//font medium
#define PingFangMediumSize(fSize)  [UIFont fontWithName:@"PingFangSC-Medium" size:fSize] ? : [UIFont systemFontOfSize:fSize]

//constant
#define TipLoding              @"加载中..."
#define LocationServiceDisable  @"请到手机系统的[设置]->[隐私]->[定位服务]中打开定位服务，并允许实惠使用定位服务"
#define kUpdateUserInfo           @"kUpdateUserInfo"
#define kLoginSuccess             @"kLoginSuccess"
#define kUserLogout               @"kUserLogout"

//只允许字母和数字的输入框过滤条件
#define ALPHANUM @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
#define PureDigitNum @"0123456789"

#endif /* SHMacro_h */
