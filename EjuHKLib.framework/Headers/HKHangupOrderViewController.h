//
//  HKHangupOrderViewController.h
//  Housekeeper
//
//  Created by Fane on 2019/5/15.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewController.h"

typedef void(^HangupBlock)(int identifier);


NS_ASSUME_NONNULL_BEGIN

@interface HKHangupOrderViewController : HKBaseViewController
@property (nonatomic, strong) NSString *repairId;

@property (nonatomic, copy) HangupBlock hangupBlock;

@end

NS_ASSUME_NONNULL_END
