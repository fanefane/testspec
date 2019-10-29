//
//  HKRepairListTableViewCell.h
//  Housekeeper
//
//  Created by hbz on 2019/6/21.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseCell.h"
#import "HKRepairListInfo.h"
#import "HKReportListTableViewModel.h"
NS_ASSUME_NONNULL_BEGIN
 typedef void(^HKRepairListHandleBlock)(NSInteger index);
@interface HKRepairListTableViewCell : HKBaseCell
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet UILabel *addressLabel;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *contentLabel;
@property (weak, nonatomic) IBOutlet UILabel *distanceTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *timeTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *appointTimeLabel;
@property (assign, nonatomic)  HKRepairOrderType repairType;
@property (strong, nonatomic)HKRepairResponse *  repairResponse;
@property (weak, nonatomic) IBOutlet UIImageView *guaqiImageView;
@property (weak, nonatomic) IBOutlet UIView *bottomView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *topViewToBottom;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *addressLabelToLeft;
@property (weak, nonatomic) IBOutlet UIImageView *leftTagImageView;
@property (weak, nonatomic) IBOutlet UIImageView *tagImageView;
@property (weak, nonatomic) IBOutlet UIButton *doButton;
@property (strong, nonatomic)HKReportListTableViewModel * viewModel;
@property (copy, nonatomic)HKRepairListHandleBlock handleBlock;
@end

NS_ASSUME_NONNULL_END
