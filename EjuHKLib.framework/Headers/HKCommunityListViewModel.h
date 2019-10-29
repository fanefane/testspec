//
//  HKCommunityListViewModel.h
//  Housekeeper
//
//  Created by hbz on 2019/6/27.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewModel.h"
#import "HKCommunityListItem.h"
NS_ASSUME_NONNULL_BEGIN

@interface HKCommunityListViewModel : HKBaseViewModel
@property(nonatomic , strong)NSMutableArray * communityListArray;
- (void)requestQueryCommunityListList;
- (void)requestQueryUserUpdateReqVoWithItem:(HKCommunityListItem*)item;
- (void)requestQueryRepairCommunityListList;
@end

NS_ASSUME_NONNULL_END
