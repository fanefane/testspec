//
//  HKAssignerSelectionCell.h
//  Housekeeper
//
//  Created by Fane on 2019/5/21.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HKReportAssginerList.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKAssignerSelectionCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIView *bgView;
@property (weak, nonatomic) IBOutlet UILabel *titleLab;
@property (nonatomic, strong) HKAssignerItem *assginer;

@end

NS_ASSUME_NONNULL_END
