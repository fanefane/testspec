//
//  HKThemeImage.h
//  Housekeeper
//
//  Created by Fane on 2019/5/10.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKThemeImage : HKBaseModel

@property (nonatomic, strong) NSString *tabBarHome;
@property (nonatomic, strong) NSString *tabBarHomePre;
@property (nonatomic, strong) NSString *tabBarStatistical;
@property (nonatomic, strong) NSString *tabBarStatisticalPre;
@property (nonatomic, strong) NSString *tabBarMine;
@property (nonatomic, strong) NSString *tabBarMinePre;
@property (nonatomic, strong) NSString *homeCarSearch;
@property (nonatomic, strong) NSString *homeChargeManagement;
@property (nonatomic, strong) NSString *homeEquipmentAccount;
@property (nonatomic, strong) NSString *homeEquipmentInspection;
@property (nonatomic, strong) NSString *homeEquipmentMaintenance;
@property (nonatomic, strong) NSString *homeUserQuery;
@property (nonatomic, strong) NSString *homeVisitorRegistration;
@property (nonatomic, strong) NSString *homeCustomerComplaintManager;
@property (nonatomic, strong) NSString *homeReportRepair;
@property (nonatomic, strong) NSString *homePatrolManager;
@property (nonatomic, strong) NSString *mineHead;
@property (nonatomic, strong) NSString *mineSchedulingManagement;
@property (nonatomic, strong) NSString *mineNotice;
@property (nonatomic, strong) NSString *mineSetting;
@property (nonatomic, strong) NSString *repairPersonal;
@property (nonatomic, strong) NSString *repairPublic;
@property (nonatomic, strong) NSString *repairHang;
@property (nonatomic, strong) NSString *workOrderProgressPre;
@property (nonatomic, strong) NSString *homeStatistical;//数据统计
@property (nonatomic, strong) NSString *homeDeviceLog;//设备日志
@property (nonatomic, strong) NSString *homeComplaintPraise;//投诉表扬
@property (nonatomic, strong) NSString *homeMeterReading;//代收抄表
@property (nonatomic, strong) NSString *commonItemBg1; //报事报修/巡检管理 背景图
@property (nonatomic, strong) NSString *commonItemBg2; //报事报修/巡检管理 背景图
@property (nonatomic, strong) NSString *commonItemBg3; //报事报修/巡检管理 背景图
@property (nonatomic, strong) NSString *commonItemBg4; //报事报修/巡检管理 背景图
///消息列表 未读icon
@property (nonatomic, strong) NSString *messageOrderSelect;

@end

NS_ASSUME_NONNULL_END


/**
 "tabBarHome": "theme/default/xhdpi/icon_main_home_nor.png",
 "tabBarHomePre": "theme/default/xhdpi/icon_main_home_pre.png",
 "tabBarStatistical": "theme/default/xhdpi/icon_main_statistical_nor.png",
 "tabBarStatisticalPre": "theme/default/xhdpi/icon_main_statistical_pre.png",
 "tabBarMine": "theme/default/xhdpi/icon_main_mine_nor.png",
 "tabBarMinePre": "theme/default/xhdpi/icon_main_mine_pre.png",
 "homeCarSearch": "theme/default/xhdpi/icon_home_car_search.png",
 "homeChargeManagement": "theme/default/xhdpi/icon_home_charge_management.png",
 "homeEquipmentAccount": "theme/default/xhdpi/icon_home_equipment_account.png",
 "homeEquipmentInspection": "theme/default/xhdpi/icon_home_equipment_inspection.png",
 "homeEquipmentMaintenance": "theme/default/xhdpi/icon_home_equipment_maintenance.png",
 "homeUserQuery": "theme/default/xhdpi/icon_home_user_query.png",
 "homeVisitorRegistration": "theme/default/xhdpi/visitor_registration.png",
 "homeCustomerComplaintManager": "theme/default/xhdpi/icon_home_customer_complaint_management.png",
 "homeReportRepair": "theme/default/xhdpi/icon_home_report_repair.png",
 "homePatrolManager": "theme/default/xhdpi/icon_home_patrol_management.png",
 "reportRepairRepairBg": "theme/default/xhdpi/bg_repair_work_order.png",
 "reportRepairReportBg": "theme/default/xhdpi/bg_report_work_order.png",
 "mineHead": "theme/default/xhdpi/icon_mine_head.png",
 "mineSchedulingManagement": "theme/default/xhdpi/icon_mine_scheduling_management.png",
 "mineNotice": "theme/default/xhdpi/icon_mine_notice.png",
 "mineSetting": "theme/default/xhdpi/icon_mine_setting.png",
 "repairPersonal": "#3E8FFF",
 "repairPublic": "#4DA34A",
 "repairHang": "theme/default/xhdpi/icon_repair_hang.png",
 "workOrderProgressPre": "theme/default/xhdpi/work_order_progress_pre.png"
 */

