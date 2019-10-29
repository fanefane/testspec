//
//  SHLocationServerManager.h
//  ShiHui
//
//  Created by 王恒求 on 2018/4/23.
//  Copyright © 2018年 HZMC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#define kLocationServerManagerNotificatin   @"LocationServerManagerNotificatin"
 typedef void(^LocationSuccessBlock)();
 typedef void(^LocationFailBlock)();
@interface SHLocationServerManager : NSObject<CLLocationManagerDelegate>

/** 定位成功与否*/
@property(nonatomic,assign)BOOL isSuccess;
/** 经度*/
@property(nonatomic,assign) double longitude;
/** 纬度*/
@property(nonatomic,assign) double latitude;
/** 详细地址信息*/
@property(nonatomic,strong) NSString* addressDesc;
/** 省名*/
@property(nonatomic,strong) NSString* province;
/** 城市名*/
@property(nonatomic,strong) NSString* city;
/** 街道名*/
@property(nonatomic,strong) NSString* street;
@property(nonatomic,copy) LocationSuccessBlock locationSuccessBlock;
@property(nonatomic,copy)LocationFailBlock locationFailBlock;
/** 获取单例*/
+ (SHLocationServerManager *)sharedLocationManager;

/** 开始定位*/
-(BOOL)startLocation;

/** 判断定位权限是否开启*/
- (BOOL)isLocationOpen;

@end
