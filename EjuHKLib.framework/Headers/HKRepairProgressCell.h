//
//  HKRepairProgressCell.h
//  ShiHuiWaiter
//
//  Created by Fane on 2019/4/4.
//  Copyright © 2019 ShiHui. All rights reserved.
//

#import "HKBaseCell.h"
#import "HKReportRepairDetail.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKRepairProgressCell : HKBaseCell
@property (weak, nonatomic) IBOutlet UIView *topSepView;
@property (weak, nonatomic) IBOutlet UIImageView *indicatorView;
@property (weak, nonatomic) IBOutlet UIView *contentContainerView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *contentContainerCSHeight;

@property (weak, nonatomic) IBOutlet UIView *imageContainerView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *imageContainerCSHeight;


@property (nonatomic, assign) BOOL isFisrt;

@property (nonatomic, strong) HKReportRepairFlow *repairFlow;

@end

NS_ASSUME_NONNULL_END
