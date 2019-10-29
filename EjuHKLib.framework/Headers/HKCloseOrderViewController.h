//
//  HKCloseOrderViewController.h
//  Housekeeper
//
//  Created by Fane on 2019/5/15.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewController.h"
#import "HKReportListTableViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKCloseOrderViewController : HKBaseViewController
@property (nonatomic, assign) HKReportRepairOrderType orderType;
@property (nonatomic, strong) NSString *reportId;

@end

NS_ASSUME_NONNULL_END
