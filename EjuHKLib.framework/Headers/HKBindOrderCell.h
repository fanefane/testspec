//
//  HKBindOrderCell.h
//  Housekeeper
//
//  Created by Fane on 2019/5/22.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseCell.h"
#import "HKReportRepairDetail.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKBindOrderCell : HKBaseCell
@property (weak, nonatomic) IBOutlet UILabel *orderNumLab;
@property (weak, nonatomic) IBOutlet UILabel *payStyleLab;
@property (weak, nonatomic) IBOutlet UILabel *orderTypeLab;
@property (weak, nonatomic) IBOutlet UILabel *hourFeeLab;
@property (weak, nonatomic) IBOutlet UILabel *materialFeeLab;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *infoContianerCSHeight;

@property (nonatomic, strong) HKReportRepairDetail *detail;

@end

NS_ASSUME_NONNULL_END
