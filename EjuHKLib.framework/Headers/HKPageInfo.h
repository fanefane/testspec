//
//  HKPageInfo.h
//  Housekeeper
//
//  Created by Fane on 2019/6/27.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKPageInfo : HKBaseModel
@property (nonatomic, assign) NSInteger total;
@property (nonatomic, assign) NSInteger totalPages;
@property (nonatomic, assign) NSInteger pageSize;
@property (nonatomic, assign) NSInteger currentPage;
@property (nonatomic, assign) BOOL first;
@property (nonatomic, assign) BOOL last;

@end

NS_ASSUME_NONNULL_END
