//
//  HKBuildingDomain.h
//  Housekeeper
//
//  Created by hbz on 2019/7/9.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewModel.h"
#import "HKBuildingModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface HKBuildingDomain : HKBaseViewModel
 
-(void)findBuildingAndUnitsComplete:(void(^)(NSArray* array))complete;
-(void)FindSpaceByBuildingIdAndUnitPathWithBuildingId:(NSString *)buildingId
                                                 unit:(NSString *)unit complete:(void(^)(NSArray* array))complete;

-(void)FindOwnerDetailWithRoomId:(NSString *)spaceId complete:(void(^)(HKOwnerModel* ownerModel))complete;

@end

NS_ASSUME_NONNULL_END
