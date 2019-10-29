//
//  HKImageUploadManager.h
//  Housekeeper
//
//  Created by hbz on 2019/6/12.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKImageUploadManager : HKBaseViewModel
-(void)uploadOrderImage:(UIImage*)image completionBlock:(void(^) (NSString  * _Nonnull fileName))completionBlock;
@end

NS_ASSUME_NONNULL_END
