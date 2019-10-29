//
//  HKNavigationController.h
//  ShiHui
//
//  Created by Fane on 2018/11/20.
//  Copyright © 2018 ShiHui. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HKNavigationController : UINavigationController

- (UIBarButtonItem*)backBarButtonItem;

///自定义返回按钮事件
- (UIBarButtonItem*)backBarButtonItemWithTarget:(id)target action:(SEL)action;

///自定义barbuttonItem
- (UIBarButtonItem*)barButtonItemWithTitle:(NSString*)title titleColor:(UIColor*)color action:(SEL)action target:(id)target;
+ (UIBarButtonItem*)barButtonItemWithImage:(UIImage*)image action:(SEL)action target:(id)target;

+ (UIBarButtonItem*)barButtonItemWithImage:(UIImage*)image action:(SEL)action target:(id)target size:(CGSize)size align:(UIControlContentHorizontalAlignment)align;

- (void)removeControllerWithNames:(NSArray*)vcNames;

///如果堆栈中vc,则移除vc及vc后的所有vcs，并push出vc
- (void)pushNODuplicateViewController:(UIViewController *)viewController animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
