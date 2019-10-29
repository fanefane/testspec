//
//  HKOrderAssignView.h
//  Housekeeper
//
//  Created by Fane on 2019/5/16.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HKReportAssginerList.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^AssignConfirmBlock)(HKAssignerItem*item);


@interface HKOrderAssignView : UIView
@property (nonatomic, strong) NSArray *managers;
@property (nonatomic, strong) NSArray *maintainers;
@property (nonatomic, copy) AssignConfirmBlock confirmBlock;
- (void)setupViews;

@property (nonatomic, strong) NSArray *items;
- (void)reloadSubViews;

@end

NS_ASSUME_NONNULL_END
