//
//  HKReportListViewController.h
//  Housekeeper
//
//  Created by hbz on 2019/5/9.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewController.h"
#import "HKReportListViewModel.h"
NS_ASSUME_NONNULL_BEGIN
typedef void(^HKReportListUpdateTitleBlock)(NSInteger pendingCount,NSInteger beingProcessedCount,NSInteger submitCount );
@interface HKReportListViewController : HKBaseViewController
@property(nonatomic , assign)HKReportOrderType type;
@property(nonatomic , copy)HKReportListUpdateTitleBlock  updateTitleBlock;
 
@property (assign, nonatomic)  HKReportRepairOrderType orderType;
@property(nonatomic , copy) NSString * itemId;
@end

NS_ASSUME_NONNULL_END
