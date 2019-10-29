//
//  HKThemeManager.h
//  Housekeeper
//
//  Created by Fane on 2019/5/9.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HKThemeColor.h"
#import "HKThemeImage.h"

typedef enum : NSUInteger {
    AppThemeTypeBlue,
    AppThemeTypeRed,
} AppThemeType;

NS_ASSUME_NONNULL_BEGIN

@interface HKThemeManager : NSObject
@property (nonatomic, strong) HKThemeColor *themeColor;
@property (nonatomic, strong) HKThemeImage *themeImg;


+ (instancetype)shareInstance;

@end

NS_ASSUME_NONNULL_END

/**
 version //主题版本号
 color//主题所有相关颜色
 themeColor;//主题颜色
 homeComplaintPraise;//首页 客诉管理颜色
 homeReportRepair;//首页 报事报修颜色
 homePatrolManager;//首页 巡检管理颜色
 "reportHomeColor1": "#5474F7",
 "reportHomeColor2": "#3E8FFF",
 "reportHomeColor3": "#0CB3DF"
 
 img //主题所有相关图片
 tabBarHome;//主页 首页未选中icon
 tabBarHomePre;//主页 首页选中icon
 tabBarStatistical;//主页 统计未选中icon
 tabBarStatisticalPre;//主页 统计未选中icon
 tabBarMine;//主页 我的未选中icon
 tabBarMinePre;//主页 我的未选中icon
 homeCarSearch;//首页 车辆查询icon
 homeChargeManagement;//首页 收费管理icon
 homeEquipmentAccount;//首页 设备台账icon
 homeEquipmentInspection;//首页 设备巡检icon
 homeEquipmentMaintenance;//首页 设备维保icon
 homeUserQuery;//首页 住户查询icon
 homeVisitorRegistration;//首页 访客登记icon
 homeCustomerComplaintManager;//首页 客诉管理icon
 homeReportRepair;//首页 报事报修icon
 homePatrolManager;//首页 巡检管理icon
 mineHead;//我的 默认头像icon
 mineSchedulingManagement;//我的 排班管理icon
 mineNotice;//我的 消息通知icon
 mineSetting;//我的 设置icon
 repairPersonal;//报修工单列表 个人icon
 repairPublic;//报修工单列表 公共icon
 repairHang;//报修工单列表 挂起icon
 workOrderProgressPre;//工单详情 工单进度列表 第一条数据icon
homeStatistical;//数据统计
homeDeviceLog;//设备日志
homeComplaintPraise;//投诉表扬
homeMeterReading;//代收抄表
commonItemBg1; //报事报修/巡检管理 背景图
commonItemBg2; //报事报修/巡检管理 背景图
commonItemBg3; //报事报修/巡检管理 背景图
commonItemBg4; //报事报修/巡检管理 背景图
 */

