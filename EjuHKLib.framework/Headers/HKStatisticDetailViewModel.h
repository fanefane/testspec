//
//  HKStatisticDetailViewModel.h
//  Housekeeper
//
//  Created by hbz on 2019/8/9.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewModel.h"
#import "HKStatisticViewModel.h"
NS_ASSUME_NONNULL_BEGIN
 typedef void(^HKStatisticSetYearBlock)(NSString * callHandle,NSString * arguments);
@interface HKStatisticDetailViewModel : HKBaseViewModel
@property (nonatomic ,strong)UIViewController * vc;
@property (nonatomic, strong) HKStatisticViewModel *statisticViewModel;
@property (nonatomic, copy) HKStatisticSetYearBlock setYearBlock;
-(void)leftNavigationViewWithVC:(UIViewController *)vc;
-(void)setNavTitleWithTitle:(NSString *)title;
-(void)rightNavigationViewWithVC:(UIViewController *)vc;
@end

NS_ASSUME_NONNULL_END
