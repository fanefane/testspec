//
//  UIViewController+help.h
//  ShiHui
//
//  Created by Fane on 2018/12/27.
//  Copyright © 2018 shihui. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (help) <UINavigationControllerDelegate>


/**
 推送字段
 */
@property (nonatomic, strong) NSDictionary *notiInfo;

- (void)setNavBottomLineColor:(UIColor*)color;
-(void)toLoginWithSuccess:(void(^)(void))successBlock;
-(void)toLogin;

/**
 从当前nav的栈中移除vcs

 @param vcNames 需要移除的vcs
 */
- (void)removeControllersFromNavWithNames:(NSArray*)vcNames;

/**
 **特定页面 禁用&开启 侧滑返回手势
 
     *使用方法示例，必须在VC的这两个方法中使用
         - (void)viewDidAppear:(BOOL)animated
         {
             [super viewDidAppear:animated];
             [self closePopGesture];
         }
 
         - (void)viewWillDisappear:(BOOL)animated
         {
             [super viewWillDisappear:animated];
             [self openPopGesture];
         }
 */
- (void)closePopGesture;
- (void)openPopGesture;

@end

NS_ASSUME_NONNULL_END
