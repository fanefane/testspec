//
//  HKReportPageViewController.h
//  Housekeeper
//
//  Created by hbz on 2019/5/9.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "WMPageController.h"
#import <WMPageController/WMPageController.h>
#import "HKReportListViewController.h"
NS_ASSUME_NONNULL_BEGIN
@interface HKReportPageTitleItem : HKBaseModel
@property(nonatomic ,copy) NSString * name;
@property(nonatomic ,copy) NSString * itemId;

@end
@interface HKReportPageViewController : WMPageController
@property(nonatomic , assign)NSInteger selectedIndex;
@end

NS_ASSUME_NONNULL_END
