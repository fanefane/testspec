//
//  HKRepairFeeCell.h
//  Housekeeper
//
//  Created by Fane on 2019/5/16.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseCell.h"
typedef void (^FeeInputBlock)(UITextField* textField);

NS_ASSUME_NONNULL_BEGIN

@interface HKRepairFeeCell : HKBaseCell
@property (weak, nonatomic) IBOutlet UILabel *titleLab;
@property (weak, nonatomic) IBOutlet UITextField *textField;

@property (nonatomic, copy) FeeInputBlock inputBlock;

@end

NS_ASSUME_NONNULL_END
