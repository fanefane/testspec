//
//  UIView+Extern.h
//  ShiHui
//
//  Created by Fane on 2018/12/13.
//  Copyright © 2018 shihui. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_OPTIONS(NSUInteger, BorderType) {
    BorderTypeTop = 1 << 0,
    BorderTypeLeft = 1 << 1,
    BorderTypeBottom = 1 << 2,
    BorderTypeRight = 1 << 3
};

NS_ASSUME_NONNULL_BEGIN

@interface UIView (Extern)
@property (nonatomic) CGFloat height;  
- (void)setBorderColor:(UIColor *)color width:(CGFloat)width borderType:(BorderType)borderType;

- (void)removeAllSubviews;

@end

NS_ASSUME_NONNULL_END
