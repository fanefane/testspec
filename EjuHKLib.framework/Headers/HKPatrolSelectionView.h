//
//  HKPatrolSelectionView.h
//  Housekeeper
//
//  Created by Fane on 2019/6/4.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SHCoverBackgroundView.h"

NS_ASSUME_NONNULL_BEGIN
typedef void(^SelectedBlock)(int idx);

@interface HKPatrolSelectionView : UIView
@property (nonatomic, copy) SelectedBlock selectedBlock;
+ (instancetype)instanceSelectionViewWithFrame:(CGRect)frame title:(NSString*)title items:(NSArray*)items;

- (void)show;

@end

NS_ASSUME_NONNULL_END
