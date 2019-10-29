//
//  HKReportMenuViewCell.h
//  Housekeeper
//
//  Created by hbz on 2019/5/30.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseCell.h"
#import "HKReportMenuViewModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface HKReportMenuViewCell : HKBaseCell
@property (weak, nonatomic) IBOutlet UIImageView *bgImageView;
@property (weak, nonatomic) IBOutlet UIImageView *iconImageView;
@property (weak, nonatomic) IBOutlet UILabel *subTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property(nonatomic,strong)HKReportMenuViewItem * item;
@end

NS_ASSUME_NONNULL_END
