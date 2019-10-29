//
//  UITextField+help.h
//  Qin
//
//  Created by Fane on 2018/11/26.
//  Copyright © 2018 ShiHui. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (help)
//最大输入数限制
- (void)textWithMaxNum:(NSInteger)limitNum;
-(void)leftViewStyleWithImageName:(NSString *)imageName;
//判断输入小数点并限制小数点后面个数
- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRanges:(NSRange)ranges replacementString:(NSString *)string thresholds:(NSInteger)thresholds;
@end

NS_ASSUME_NONNULL_END
