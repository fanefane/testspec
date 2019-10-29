//
//  CountDownTimer.h
//  ZQDemoApp
//
//  Created by 张泉 on 2016/10/13.
//  Copyright © 2016年 张泉. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CountDownTimer : NSObject

///用NSDate日期倒计时
-(void)countDownWithStratDate:(NSDate *)startDate finishDate:(NSDate *)finishDate completeBlock:(void (^)(NSInteger day,NSInteger hour,NSInteger minute,NSInteger second))completeBlock;
///用时间戳倒计时
-(void)countDownWithStratTimeStamp:(long long)starTimeStamp finishTimeStamp:(long long)finishTimeStamp completeBlock:(void (^)(NSInteger day,NSInteger hour,NSInteger minute,NSInteger second))completeBlock;
//倒计时最大显示时间
-(void)countDownWithStratTimeStamp1:(long long)starTimeStamp finishTimeStamp:(long long)finishTimeStamp completeBlock:(void (^)(NSInteger hour,NSInteger minute,NSInteger second))completeBlock;

//用剩余时间
-(void)countDownWithTimeInterval:(NSTimeInterval)timeInterval completeBlock:(void (^)(NSInteger day,NSInteger hour,NSInteger minute,NSInteger second))completeBlock;
///每秒走一次，回调block
-(void)countDownWithPER_SECBlock:(void (^)())PER_SECBlock;
-(void)destoryTimer;



-(NSDate *)dateWithLongLong:(long long)longlongValue;

@end
