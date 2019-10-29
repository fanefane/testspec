//
//  HKStatisticViewModel.h
//  Housekeeper
//
//  Created by Fane on 2019/8/7.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewModel.h"

NS_ASSUME_NONNULL_BEGIN
@interface HKStatisticUrlModel : HKBaseModel
@property (nonatomic, copy) NSString * url;
- (NSURL*)htmlURL;
+ (NSURL*)htmlURL:(NSString*)url;
@end
@interface HKStatisticViewModel : HKBaseViewModel
@property (nonatomic, strong) NSArray *timeFilters;
@property (nonatomic, strong) NSArray *communityList;

- (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;
- (void)requestCommunityListWithBlock:(void(^)(int code))block;

@end

NS_ASSUME_NONNULL_END
