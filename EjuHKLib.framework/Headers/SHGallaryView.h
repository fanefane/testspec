//
//  SHGallaryView.h
//  ShiHui
//
//  Copyright © 2018年 HZMC. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SHGallaryViewDelegate <NSObject>

-(void)SHGallaryViewDelegateCellClickedHandel:(NSInteger)selectIndex;

@end

@interface SHGallaryView : UIView

@property(nonatomic,weak) id<SHGallaryViewDelegate> delegate;
@property (nonatomic, retain) NSMutableArray *imageArr;
@property (nonatomic, copy) NSString *placeholdImage;

/**
 构造函数

 @param frame frame
 @param space 两边的间隔
 @return
 */
-(instancetype)initWithFrameAndParm:(CGRect)frame space:(CGFloat)space;


/**
 frame随self的高度
 */
-(instancetype)initWithFrame:(CGRect)frame space:(CGFloat)space;

-(void)beginTime;

@end
