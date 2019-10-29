//
//  HKReportMenuViewController.h
//  Housekeeper
//
//  Created by hbz on 2019/5/9.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewController.h"
#import "HKReportMenuViewModel.h"
NS_ASSUME_NONNULL_BEGIN
 typedef void(^HKReportMenuVCBackBlock)(void);
@interface HKReportMenuViewController : HKBaseViewController
@property(nonatomic ,assign)HKOrderMenuType menuType;
@property(nonatomic ,copy)HKReportMenuVCBackBlock backBlock;
@end

NS_ASSUME_NONNULL_END
