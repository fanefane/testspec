//
//  HKFinishOrderDesViewController.h
//  Housekeeper
//
//  Created by Fane on 2019/5/15.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewController.h"
#import "HKReportListTableViewModel.h"

#import "HKReportRepairDetail.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKFinishOrderDesViewController : HKBaseViewController
@property (nonatomic, assign) HKReportRepairOrderType orderType;
@property (nonatomic, strong) NSString *reportId;
@property (nonatomic, strong) HKReportRepairDetail *detail;

@end

NS_ASSUME_NONNULL_END
