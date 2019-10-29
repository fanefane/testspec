//
//  SHGoodsParameterCell.m
//  ShiHui
//
//  Created by 董宇 on 16/10/20.
//  Copyright © 2016年 HZMC. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DTWaterFlowLayout;

@protocol DTWaterFlowLayoutDelegate <NSObject>

- (CGFloat)waterflowLayout:(DTWaterFlowLayout *)waterflowLayout heightForItemAtIndexPath:(NSIndexPath *)indexPath itemWidth:(CGFloat)itemWidth;
@optional

/**
 *  返回四边的间距, 默认是UIEdgeInsetsMake(10, 10, 10, 10)
 */
- (UIEdgeInsets)insetsInWaterflowLayout:(DTWaterFlowLayout *)waterflowLayout;
/**
 *  返回最大的列数, 默认是2
 */
- (int)maxColumnsInWaterflowLayout:(DTWaterFlowLayout *)waterflowLayout;
/**
 *  返回每行的间距, 默认是10
 */
- (CGFloat)rowMarginInWaterflowLayout:(DTWaterFlowLayout *)waterflowLayout;
/**
 *  返回每列的间距, 默认是10
 */
- (CGFloat)columnMarginInWaterflowLayout:(DTWaterFlowLayout *)waterflowLayout;
@end


@interface DTWaterFlowLayout : UICollectionViewLayout

@property (weak, nonatomic) id <DTWaterFlowLayoutDelegate> delegate;
@end
