//
//  HKBaseViewModel.h
//  ShiHui
//
//  Created by Fane on 2018/12/7.
//  Copyright © 2018 shihui. All rights reserved.
//

#import "HKBaseModel.h"
#import "SHCoreManager.h"
#import "SHUserManager.h"
#import "EXTScope.h"
#import "SHMacro.h"
#import "NSObject+help.h"
NS_ASSUME_NONNULL_BEGIN

typedef void(^SuccessBlock)(int count);
typedef void(^FailBlock)(NSString* _Nullable errorMsg);
//不同业务的返回结果
typedef void(^HandleBlock)(NSInteger identifer,id _Nullable data);


@interface HKBaseViewModel : HKBaseModel

@property (nonatomic, copy) SuccessBlock successBlock;
@property (nonatomic, copy) FailBlock failBlock;
@property (nonatomic, copy) void(^faildHandleBlock)(int identifier,id data);

@property (nonatomic, copy) HandleBlock handleBlock;

@end

NS_ASSUME_NONNULL_END
