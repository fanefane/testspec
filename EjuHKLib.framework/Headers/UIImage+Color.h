//
//  UIImage+Color.h
//  ShiHui
//
//  Created by Fane on 2018/11/20.
//  Copyright © 2018 ShiHui. All rights reserved.
//

#import <UIKit/UIKit.h>

///渐变色渐变方向
typedef NS_ENUM(NSUInteger, GradientType) {
    GradientTypeTopToBottom = 0,//从上到小
    GradientTypeLeftToRight = 1,//从左到右
    GradientTypeUpleftToLowright = 2,//左上到右下
    GradientTypeUprightToLowleft = 3,//右上到左下
};

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (Color)

///根据颜色生成image
+ (UIImage *)imageWithColor:(UIColor *)color;

///渐变色
+ (UIImage *)gradientColorImageFromColors:(NSArray*)colors gradientType:(GradientType)gradientType imgSize:(CGSize)imgSize;


/// 从SDK中取图片
/// @param name 图片名
+ (nullable UIImage *)libImageNamed:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
