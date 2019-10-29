//
//  HKRepairDetailViewController.h
//  Housekeeper
//
//  Created by Fane on 2019/5/13.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewController.h"
#import "HKReportRepairDetail.h"

#import "HKReportListTableViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKRepairDetailViewController : HKBaseViewController
@property (nonatomic, strong) NSString *repairId;
@property (assign, nonatomic)  HKReportRepairOrderType orderType;

@end

NS_ASSUME_NONNULL_END
