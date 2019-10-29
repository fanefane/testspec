//
//  PhotosGalleryView.h
//
//  Created by Fane on 2017/7/27.
//  Copyright © 2017年 Fane. All rights reserved.
//
/*
 *
 * A PhotosGalleryView represents many photos managed
 *and display by the view。
 *
 *
 *PhotosGalleryView's dataSource can be nil,but it's scrollVieweEnable is validate when dataSource's count ≥ 2.
 */

#import <UIKit/UIKit.h>
#import "UIImageView+WebCache.h"

@class PhotoGalleryView;
@protocol PhotoGalleryViewDelegate <NSObject>

@optional;

///current page index
- (void)photoGalleryView:(PhotoGalleryView*)galleryView currentPageAtIndex:(NSUInteger)index;

///image clicked
- (void)photoGalleryView:(PhotoGalleryView*)galleryView didSelectPageAtIndex:(NSUInteger)index;

@end


@interface PhotoGalleryView : UIView

///load failed image
@property (nonatomic, strong) UIImage *defaultImage;

///loading placeholder image
@property (nonatomic, strong) UIImage *placeholderImage;

///delegate
@property (nonatomic, weak) id delegate;

///hide pageControlIndicator or not ,default is NO
@property (nonatomic, assign) BOOL hidePageControl;

///pageControl page indicator color
@property (nonatomic, strong) UIColor *indicatorColor;

///pageControl current page indicator color
@property (nonatomic, strong) UIColor *currentIndicatorColor;

@property (nonatomic, assign) NSTimeInterval timeInterval;

///image url strings or image names。
@property (nonatomic, strong) NSArray *dataSource;

///leading and trailing margin
@property (nonatomic, assign) CGFloat horizonMargin;

///是否拉伸本地图片
@property (nonatomic, assign) BOOL scaleImage;

@property (nonatomic, strong) UIImage *firstImage;

@end
