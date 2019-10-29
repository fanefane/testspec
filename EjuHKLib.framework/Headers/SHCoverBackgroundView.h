//
//  SHCoverBackgroundView.h
//  ShiHui
//
//  Created by Fane on 2018/3/8.
//  Copyright © 2018年 HZMC. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    CoverViewShowModeCenter,
    CoverViewShowModeBottom
} CoverViewShowMode;

@interface SHCoverBackgroundView : UIView
///背景是否可交互
@property (nonatomic, assign) BOOL bgViewUserEnable;
@property (nonatomic, assign) CoverViewShowMode showMode;

+ (instancetype)instanceCoverBackgroundViewWithSubView:(UIView*)subView mode:(CoverViewShowMode)showMode;

- (void)hide;

@end
