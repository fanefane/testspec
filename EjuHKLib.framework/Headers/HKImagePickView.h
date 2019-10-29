//
//  HKImagePickView.h
//  Housekeeper
//
//  Created by hbz on 2019/6/11.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^HKImageUploadCompleteBlock)(NSMutableArray * images);

@interface HKImagePickView : UIView
@property(nonatomic,strong)NSMutableArray * images;
@property(nonatomic , copy)HKImageUploadCompleteBlock imageUploadCompleteBlock;
@property (nonatomic, assign) BOOL cameraOnly;//图片来源仅支持相机拍照

-(instancetype)initWithFrame:(CGRect)frame rowNum:(NSInteger)rowNum maxNum:(NSInteger)maxNum complete:(HKImageUploadCompleteBlock)completeBlock;

-(CGFloat)imageButtonWidth;

@end

NS_ASSUME_NONNULL_END
