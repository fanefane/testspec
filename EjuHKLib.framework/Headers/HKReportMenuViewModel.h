//
//  HKReportMenuViewModel.h
//  Housekeeper
//
//  Created by hbz on 2019/5/30.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewModel.h"

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger,HKOrderMenuType) {
    HKOrderMenuTypeReportRepair, //报事报修
    HKOrderMenuTypeDailyPatrol,   //日常巡更
    HKOrderMenuTypeComplaintPraise,   //投诉表扬
};
@interface HKReportMenuViewItem : HKBaseViewModel
@property (nonatomic ,copy)NSString * title;
@property (nonatomic ,copy)NSString * subtitle;
@property (nonatomic ,copy)NSString * iconName;
@property (nonatomic ,copy)NSString * bgImageName;
@property (nonatomic ,assign)NSInteger itemId;
@end
@interface HKReportMenuViewModel : HKBaseViewModel
@property(nonatomic , copy)NSArray * repairReportArray;
@property(nonatomic , copy)NSArray * dailyPatrolArray;
@property(nonatomic , copy)NSArray * complaintPraiseArray;
@end

NS_ASSUME_NONNULL_END
