//
//  HKRepairContactCell.h
//  Housekeeper
//
//  Created by Fane on 2019/5/13.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseCell.h"
#import "HKReportRepairDetail.h"
#import "HKReportListTableViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKRepairContactCell : HKBaseCell
@property (weak, nonatomic) IBOutlet UILabel *nameLab;
@property (weak, nonatomic) IBOutlet UILabel *timeLab;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *timeLabCSHeight;
@property (weak, nonatomic) IBOutlet UILabel *addressLab;
@property (weak, nonatomic) IBOutlet UIButton *phoneBtn;

@property (nonatomic, strong) HKReportRepairDetail *detai;
@property (nonatomic, assign) HKReportRepairOrderType orderType;

- (IBAction)phoneBtnClick:(id)sender;

@end

NS_ASSUME_NONNULL_END
