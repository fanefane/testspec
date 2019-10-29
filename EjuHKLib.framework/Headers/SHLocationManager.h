//
//  SHLocationManager.h
//  ShiHui
//
//  Created by Fane on 2018/12/13.
//  Copyright © 2018 shihui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

typedef void(^LocationBlock)(NSString *errorString);
typedef void(^LocationSucessBlock)(CLLocation *location);

NS_ASSUME_NONNULL_BEGIN

@interface SHLocationManager : NSObject

@property (nonatomic, strong) CLLocation *location;

+ (instancetype)shareInstance;

///是否开启定位服务
+(BOOL) isLocationServiceOpen;

///获取用户地址
-(void) getUserCurrentLocation:(LocationBlock) block location:(LocationSucessBlock) locationSucess;

///关闭定位
- (void) stopUpdatingUserLocation;

@end

NS_ASSUME_NONNULL_END
