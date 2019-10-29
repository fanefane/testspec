//
//  CountDownLabel.h
//  ShiHui
//
//  Created by 张泉 on 2017/12/21.
//  Copyright © 2017年 HZMC. All rights reserved.
//

#import "CountDownTimer.h"
#import <extobjc/EXTScope.h>

@interface CountDownLabel : UILabel

@property(nonatomic,strong)CountDownTimer* timer;
-(void) startCountDownWithTimeInterval:(NSInteger) countDown;
@end
