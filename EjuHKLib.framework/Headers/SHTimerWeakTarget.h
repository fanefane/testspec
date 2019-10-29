//
//  SHTimerWeakTarget.h
//  ShiHui
//
//  Created by 王恒求 on 2017/6/12.
//  Copyright © 2017年 HZMC. All rights reserved.
//

#import <Foundation/Foundation.h>

/** 
 防止重复定时器循环引用而创建的桥接器
 将定时器的target设置为该对象，以防止定时器强引用vc对象
 */

@interface SHTimerWeakTarget : NSObject

@property (nonatomic, assign) SEL selector;
@property (nonatomic, retain) NSTimer *timer;
@property (nonatomic, weak) id target;

+ (NSTimer *) scheduledTimerWithTimeInterval:(NSTimeInterval)interval
                                      target:(id)aTarget
                                    selector:(SEL)aSelector
                                    userInfo:(id)userInfo
                                     repeats:(BOOL)repeats;

+ (NSTimer *) timerWithTimeInterval:(NSTimeInterval)interval
                                      target:(id)aTarget
                                    selector:(SEL)aSelector
                                    userInfo:(id)userInfo
                                     repeats:(BOOL)repeats;

+ (NSTimer *) timerWithTimeIntervalAndDelayDate:(NSTimeInterval)interval
                                          delay:(NSDate *)delay
                                         target:(id)aTarget
                                       selector:(SEL)aSelector
                                       userInfo:(id)userInfo
                                        repeats:(BOOL)repeats;

-(void)fire:(NSTimer *)timer;
@end
