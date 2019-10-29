//
//  HKDropdownMenu.h
//  Housekeeper
//
//  Created by hbz on 2019/9/29.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^HKDropdownMenuHiddenBlock)(id item);
typedef void(^HKDropdownMenuCompleteBlock)(void);
@interface HKDropdownMenu : UIView
@property(nonatomic ,copy) HKDropdownMenuHiddenBlock dropdownMenuHiddenBlock;
@property(nonatomic ,copy) HKDropdownMenuCompleteBlock dropdownMenuCompleteBlock;
-(instancetype)initWithFrame:(CGRect)frame dataArray:(NSArray *)dataArray complete:(HKDropdownMenuCompleteBlock)complete;
-(void)show;
-(void)hide;
@end

NS_ASSUME_NONNULL_END
