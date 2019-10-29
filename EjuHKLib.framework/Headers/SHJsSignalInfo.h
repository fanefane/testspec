//
//  SHJsSignalInfo.h
//  ShiHui
//
//  Created by hbz on 2018/9/12.
//  Copyright © 2018年 HZMC. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface SHJsReceiveSignalInfo : NSObject
@property(nonatomic)id  args;
@property(nonatomic,strong)NSString * callBackName;
@end
@interface SHJsCallBackSignalInfo : NSObject
@property(nonatomic,assign)NSInteger status;
@property(nonatomic,strong)NSString * callBackName;
@property(nonatomic)id data;
@property(nonatomic,strong)NSString * msg;
@end
@interface SHJsSignalInfo : NSObject

@end
