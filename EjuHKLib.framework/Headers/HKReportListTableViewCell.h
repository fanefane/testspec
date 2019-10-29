//
//  HKReportListTableViewCell.h
//  Housekeeper
//
//  Created by hbz on 2019/5/9.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseCell.h"
#import "HKReportListInfo.h"
#import "HKRepairListInfo.h"
#import "HKReportListTableViewModel.h"
NS_ASSUME_NONNULL_BEGIN
//typedef NS_ENUM(NSInteger , HKReportOrderType) {
//    HKReportOrderTypeReport,//报事工单
//    HKReportOrderTypeRepair_Personal_WaitHandle,//个人报修待处理
//    HKReportOrderTypeRepair_Public_WaitHandle,//公共报修待处理
//    HKReportOrderTypeRepair_Personal_Processing,//个人报修处理中
//    HKReportOrderTypeRepair_Public_Processing,//公共报修处理中
//    HKReportOrderTypeRepair_Personal_Complete,//个人报修完成
//    HKReportOrderTypeRepair_Public_Complete  //公共报修完成
//};
 typedef void(^HKReportListHandleBlock)(NSInteger index);
@interface HKReportListTableViewCell : HKBaseCell
@property (weak, nonatomic) IBOutlet UIImageView *guaqiImageView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *topBgViewToBottomConstraint;
@property (weak, nonatomic) IBOutlet UIImageView *letfTagImageView;
@property (weak, nonatomic) IBOutlet UIImageView *tagImageView;
@property (weak, nonatomic) IBOutlet UIView *bottomView;
@property (assign, nonatomic)  HKReportOrderType reportType;
@property (assign, nonatomic)  HKRepairOrderType repairType;
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *distanceTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *contentLabel;
@property (weak, nonatomic) IBOutlet UILabel *intervalLabel;
@property (weak, nonatomic) IBOutlet UILabel *appointTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *addressLabel;
@property (strong, nonatomic)HKReportListTableViewModel * viewModel;
@property (strong, nonatomic)HKReportExternalResponse * reportResponse;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *contentLabelToLine;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *nameLabelToLeft;
@property (weak, nonatomic) IBOutlet UIButton *doButton; //去处理按钮
@property (copy, nonatomic)HKReportListHandleBlock handleBlock;
@property (strong, nonatomic)HKRepairResponse *  repairResponse;
@property (assign, nonatomic)  HKReportRepairOrderType orderType;
@end

NS_ASSUME_NONNULL_END
