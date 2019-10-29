//
//  UIColor+help.h
//  Housekeeper
//
//  Created by Fane on 2019/5/9.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (help)
///16进制字符串生成颜色
+ (UIColor *)colorWithHex:(NSString *)hex;
    
@end

NS_ASSUME_NONNULL_END
