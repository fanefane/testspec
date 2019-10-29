//
//  SWBigImageScanViewController.h
//  ShiHuiWaiter
//
//  Created by Fane on 2019/4/10.
//  Copyright © 2019 ShiHui. All rights reserved.
//

#import "HKBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface SWBigImageScanViewController : HKBaseViewController
@property (nonatomic, assign) BOOL canDel;
@property (nonatomic, assign) int curIndex;
@property (nonatomic, copy) void(^deleteBlock)(int);

-(instancetype)initWithParm:(NSMutableArray *)arr ;
-(instancetype)initWithParm:(NSMutableArray *)arr hasNav:(BOOL)hasNav;

@end

NS_ASSUME_NONNULL_END
