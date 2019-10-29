//
//  HKRepairListInfo.h
//  Housekeeper
//
//  Created by hbz on 2019/5/21.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseModel.h"

NS_ASSUME_NONNULL_BEGIN
@interface HKRepairResponse : HKBaseModel
@property(nonatomic ,copy)NSString * repairId;//工单ID
@property(nonatomic ,copy)NSString * mid;//服务社ID
@property(nonatomic ,copy)NSString * category;//报修类别
@property(nonatomic ,copy)NSString * appointmentDate;//报事内容
@property(nonatomic ,assign)NSInteger   repairArea;//报修区域（1：个人住宅，2：公共区域）
@property(nonatomic ,assign)BOOL  hasTimedOut;//是否超时（0：否，1：是）
@property(nonatomic ,copy)NSString * spaceInfo;//房间信息
@property(nonatomic ,copy)NSString * groupName;//小区名称
@property(nonatomic ,copy)NSString * repairAreaName;//报修区域（个人住宅，公共区域）
@property(nonatomic ,copy)NSString * groupId;//小区ID
@property(nonatomic ,copy)NSString * appointmentTime;//预约时间段
@property(nonatomic ,assign)NSInteger  status;//工单状态（0:待指派，1:待处理，2：处理中，3:已完成，5:已取消）
@property(nonatomic ,assign)BOOL  hasUnPay;//是否有未付款（false：无，true：有）
@property(nonatomic ,copy)NSString * appointmentDay;//预约日期
@property(nonatomic ,assign)NSInteger source;//来源(1:APP报修,2:现场报修,3:电话报修)
@property(nonatomic ,copy)NSString *repairTime;//报修时间
@property(nonatomic ,copy)NSString *content;//报修内容
@property(nonatomic ,assign)BOOL hangUp; //是否挂起（0：未挂起，1：已挂起）



@end
@interface HKRepairListInfo : HKBaseModel
@property(nonatomic ,assign)NSUInteger pendingCount;//待处理数量
@property(nonatomic ,assign)NSInteger beingProcessedCount;//处理中数量
@property(nonatomic ,assign)NSInteger submitCount;//待指派数量
@property(nonatomic ,copy) NSArray * repairExternalResponseVOList;//列表内容
@end

NS_ASSUME_NONNULL_END
