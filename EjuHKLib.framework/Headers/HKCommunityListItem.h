//
//  HKCommunityListItem.h
//  Housekeeper
//
//  Created by hbz on 2019/6/27.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKCommunityListItem : HKBaseModel
@property(nonatomic,copy)NSString * com_name;
@property(nonatomic,copy)NSString * community;
@property(nonatomic,copy)NSString * com_address;
@property(nonatomic,copy)NSString * communityId;
@property(nonatomic,copy)NSString * name;
@end

NS_ASSUME_NONNULL_END
