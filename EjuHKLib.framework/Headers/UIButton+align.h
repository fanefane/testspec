//
//  UIButton+align.h
//  ShiHui
//
//  Created by Fane on 2017/2/12.
//  Copyright © 2017年 HZMC. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, ButtonImgAlignType) {
    ButtonImgAlignTypeTop, // image在上，label在下
    ButtonImgAlignTypeLeft, // image在左，label在右
    ButtonImgAlignTypeBottom, // image在下，label在上
    ButtonImgAlignTypeRight // image在右，label在左
};

@interface UIButton (align)

- (void)alignWithType:(ButtonImgAlignType)type
                        margin:(CGFloat)space;
-(void)buttonWithUserInteractionEnabledStyle;
-(void)buttonWithUserInteractionUnEnabledStyle;

@end
