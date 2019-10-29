//
//  UITextView+help.h
//  FlowManage
//
//  Created by Fane on 2018/9/19.
//  Copyright © 2018年 Fane. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (help)

//实际高度
- (CGFloat)heightWithMaxWidth:(CGFloat)maxWidth;

//最大输入数限制
- (void)textWithMaxNum:(NSInteger)limitNum;

@end
