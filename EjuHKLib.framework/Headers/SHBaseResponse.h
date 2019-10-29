//
//  SHBaseResponse.h
//  ShiHui
//
//  Created by Fane on 2018/11/21.
//  Copyright © 2018 ShiHui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HKBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SHBaseResponse : NSObject

@property (nonatomic, assign) int code;
@property (nonatomic, strong) id result;
@property (nonatomic, strong) NSString *msg; //后台返回信息

@property (nonatomic, strong) NSArray *errors;

@property (nonatomic, strong) NSString *errorMsg; //提示给用户的信息
@property (nonatomic, strong) NSError *error;

//result是dictionary
@property (nonatomic, strong) HKBaseModel *item;
//result是NSArray
@property (nonatomic, strong) NSArray <HKBaseModel*> *list;


+ (instancetype)instanceWithContent:(NSDictionary*)dic;

@end

NS_ASSUME_NONNULL_END
