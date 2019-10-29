//
//  NSDate+help.h
//  Housekeeper
//
//  Created by Fane on 2019/7/9.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDate (help)
///一个日期是否是当天
+ (NSString *)checkTheDate:(NSString *)string;
///是否是今天
- (BOOL)isToday;
///是否是昨天
- (BOOL)isYesterday;
///是否是当月
- (BOOL)isThisMonth;
///是否是今年
- (BOOL)isThisYear;
///返回一个 年-月-日
- (NSDate *)dateWithYMD;
///和现在的时间差
- (NSTimeInterval)deltaWithNow;
///和date的时间差，返回一个NSTimeInterval
- (NSTimeInterval)deltaWithDate:(NSDate*)date;
///和date时间差，返回一个NSDateComponents
- (NSDateComponents*)deltaComponentsWithDate:(NSDate*)date;

@end

NS_ASSUME_NONNULL_END
