//
//  HKImagePickManager.h
//  Housekeeper
//
//  Created by hbz on 2019/6/11.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
 typedef void(^HKImageSelectedBlock)(NSString * imageName);
@interface HKImagePickManager : NSObject<UIImagePickerControllerDelegate,UINavigationControllerDelegate>
@property(nonatomic ,copy)HKImageSelectedBlock  imageSelectedBlock;
@property(nonatomic ,strong)UIImagePickerController *picker;
@property (nonatomic, assign) BOOL cameraOnly;//图片来源仅支持相机拍照

-(instancetype)initWithImageSelectedBlock:(HKImageSelectedBlock)imageSelectedBlock;
-(void)alertActionView;
- (UIViewController *)getCurrentVC;
@end

NS_ASSUME_NONNULL_END
