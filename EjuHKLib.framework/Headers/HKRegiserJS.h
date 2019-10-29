//
//  HKRegiserJS.h
//  Housekeeper
//
//  Created by Fane on 2019/8/14.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "dsbridge.h"

@class HKRegiserJS;

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    
    RegisterJSCallBackTypeSelectYear,
    RegisterJSCallBackTypeJump,
    RegisterJSCallBackTypeLogout,
    RegisterJSCallBackTypeCommunity,

} RegisterJSCallBackType;

@protocol HKRegisterJSDelegate <NSObject>

- (void)registerJS:(HKRegiserJS*)registerjs identifier:(int)idf args:(id)args callback:(id)callback;

@end

@interface HKRegiserJS : NSObject
@property (nonatomic, assign) id delegate;

//NSString * _Nullable result,BOOL complete
@property (nonatomic, copy) void (^callbackBlock)(id identifier,id res);

@end

NS_ASSUME_NONNULL_END
