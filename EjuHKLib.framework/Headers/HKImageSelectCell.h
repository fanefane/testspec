//
//  HKImageSelectCell.h
//  Housekeeper
//
//  Created by Fane on 2019/5/16.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HKImageSelectCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imgView;
@property (weak, nonatomic) IBOutlet UIButton *deleteBtn;

@end

NS_ASSUME_NONNULL_END
