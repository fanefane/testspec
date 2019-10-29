//
//  UITableView+Extern.h
//  ShiHui
//
//  Created by Coder on 2017/6/16.
//  Copyright © 2017年 HZMC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MJRefresh.h"
#import <objc/runtime.h>

@interface UITableView (Extern)


///初始是否显示占位图
@property (nonatomic, assign) BOOL firstReload;
@property (nonatomic, assign) BOOL showPlaceholdWhenLoad;
///占位图
@property (nonatomic,strong) UIView *placeholderView;
///空白页点击事件
@property (nonatomic,copy) void(^reloadBlock)(void);
- (UIView*)defaultPlaceholdViewWithMsg:(NSString*)msg;
- (UIView*)defaultPlaceholdViewWithMsg:(NSString*)msg subTitle:(NSString*)subTitle;

-(void)registerNibs:(NSArray *)nibArr;

///添加上下拉刷新
- (void)addHeaderRefreshSelector:(SEL)selector target:(id)target;
- (void)addFooterRefreshSelector:(SEL)selector target:(id)target;
- (void)endHeaderFooterAnimation;
///默认cell
- (UITableViewCell *)defaultReuseCell;

///分割线
- (UIView*)sepFooterView;

///分组头&脚
- (UIView*)defaultHeaderFooterView;


@end
