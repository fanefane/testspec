//
//  HKRepairContentCell.h
//  Housekeeper
//
//  Created by Fane on 2019/5/13.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseCell.h"
#import "HKReportRepairDetail.h"
#import "HKRepairDetailViewController.h"
NS_ASSUME_NONNULL_BEGIN

@interface HKRepairContentCell : HKBaseCell
@property (weak, nonatomic) IBOutlet UILabel *titleLab;
@property (weak, nonatomic) IBOutlet UILabel *desLab;
@property (weak, nonatomic) IBOutlet UIView *imgContainerView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *imgContainerCSHeight;
@property (weak, nonatomic) IBOutlet UIImageView *unreadImgView;

@property (weak, nonatomic) IBOutlet UIView *soundContainerView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *soundViewCSHeight;
@property (weak, nonatomic) IBOutlet UIView *soundItemView;
@property (weak, nonatomic) IBOutlet UIImageView *soundItemBgImgView;
@property (weak, nonatomic) IBOutlet UIButton *soundBtn;
@property (weak, nonatomic) IBOutlet UILabel *timeLab;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *soundItemViewCSWidth;

@property (nonatomic, strong) HKReportRepairDetail *repairDetail;
@property (nonatomic, weak) id delegate;
@property (nonatomic, assign) NSInteger soundReadState;

@end

NS_ASSUME_NONNULL_END
