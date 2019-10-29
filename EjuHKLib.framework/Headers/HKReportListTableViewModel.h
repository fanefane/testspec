//
//  HKReportListTableViewModel.h
//  Housekeeper
//
//  Created by hbz on 2019/5/21.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewModel.h"

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger , HKReportRepairOrderType) {
    HKReportRepairOrderType_repair = 0,  //报修
     HKReportRepairOrderType_report,   //报事
    HKReportRepairOrderType_environmental //环保
    

};
typedef NS_ENUM(NSInteger , HKReportOrderType) {
    HKReportOrderType_wait_appointed = 0,       //报事——待指派
    HKReportOrderType_wait_processed,       //报事——待处理
    HKReportOrderType_being_processed,      //报事——处理中
    HKReportOrderType_already_completed,    //报事——已完成
    HKReportOrderType_already_cancel        //报事——已取消
};
typedef NS_ENUM(NSInteger , HKRepairOrderType) {
  
    HKRepairOrderType_wait_processed = 0,  //报修——待处理
    HKRepairOrderType_being_processed, //报修——处理中
    HKRepairOrderType_already_completed,//报修——已完成
    HKRepairOrderType_already_cancel   //报修——已取消
};
@interface HKReportListTableViewModel : HKBaseViewModel
-(NSString *)reportDayWithReportTime:(NSString *)reportTime;
-(NSString *)reportDateWithrReportTime:(NSString *)reportTime;
- (NSString *)finallyTime:(NSString *)yetTime;
-(NSString *)dateStringWithReportTime:(NSString *)reportTime dateFormat:(NSString *)dateFormat;
@end

NS_ASSUME_NONNULL_END
