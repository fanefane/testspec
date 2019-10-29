//
//  HKBaseViewController.h
//  ShiHui
//
//  Created by Fane on 2018/11/20.
//  Copyright © 2018 ShiHui. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <EasyShowView/EasyTextView.h>
#import "SHMacro.h"
#import "EXTScope.h"
#import "NSObject+help.h"
#import <Masonry/Masonry.h>

//#import <DZNEmptyDataSet/UIScrollView+EmptyDataSet.h>
NS_ASSUME_NONNULL_BEGIN

@interface HKBaseViewController : UIViewController

/**
 隐藏 导航条底部分割线
 默认是显示分割线，可在此处设置隐藏
 */
@property (nonatomic, assign) BOOL hideBarBottomLine;
@property (assign, nonatomic)BOOL hasRequest;//判断已经网络请求
///子类布局
- (void)setupViews;

//子类数据回调处理
- (void)viewModelBlocks;


- (void)reloadAllData;
- (void)reloadAllData:(NSDictionary * _Nullable)pms;

@property (nonatomic, strong) UIButton *testBtn;
- (void)showTestBtnWithTarget:(id)target selector:(SEL)sel;

@end

NS_ASSUME_NONNULL_END
