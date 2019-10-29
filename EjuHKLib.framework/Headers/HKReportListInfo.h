//
//  HKReportListInfo.h
//  Housekeeper
//
//  Created by hbz on 2019/5/20.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseModel.h"

NS_ASSUME_NONNULL_BEGIN
@interface HKReportTime : HKBaseModel
@property(nonatomic ,assign)NSInteger date;//
@property(nonatomic ,assign)NSInteger day;//
@property(nonatomic ,assign)NSInteger hours;//
@property(nonatomic ,assign)NSInteger minutes;//
@property(nonatomic ,assign)NSInteger month;//
@property(nonatomic ,assign)NSInteger nanos;//
@property(nonatomic ,assign)NSInteger seconds;//
@property(nonatomic ,assign)NSInteger time;//
@property(nonatomic ,assign)NSInteger timezoneOffset;//
@property(nonatomic ,assign)NSInteger year;//
@end
@interface HKReportExternalResponse :HKBaseModel
@property(nonatomic ,assign)NSInteger category;//报事类型（0：清洁，1：安保，2：绿化，3：客服，4：邻里，5：其他）
@property(nonatomic ,copy)NSString * categoryName;//报事类型名
@property(nonatomic ,copy)NSString * content;//报事内容
@property(nonatomic ,assign)BOOL hasTimedOut;
@property(nonatomic ,copy)NSString * mid;
@property(nonatomic ,copy)NSString *reportId;//工单ID
@property(nonatomic ,copy)NSString * reportTime;//工单时间
@property(nonatomic ,assign)NSInteger status;//工单状态（0:待指派，1:待处理，2：处理中，3:已完成，5:已取消）
@property(nonatomic ,copy)NSString *updateTime;
@end
@interface HKReportListInfo : HKBaseModel
@property(nonatomic ,assign)NSUInteger pendingCount;//待处理数量
@property(nonatomic ,assign)NSInteger beingProcessedCount;//处理中数量
@property(nonatomic ,assign)NSInteger submitCount;//待指派数量
@property(nonatomic ,copy) NSArray * reportExternalResponseVOList;//列表内容
@end

NS_ASSUME_NONNULL_END
