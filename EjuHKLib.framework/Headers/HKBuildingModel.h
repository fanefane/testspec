//
//  HKBuildingModel.h
//  Housekeeper
//
//  Created by hbz on 2019/7/9.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseModel.h"

NS_ASSUME_NONNULL_BEGIN
@interface HKOwnerModel : HKBaseModel
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *phone;
///住户类型 1 户主 2 家属 3 租户 99其他
@property (nonatomic, strong) NSString *tenementType;
@end

@interface HKRoomsModel : HKBaseModel
@property(nonatomic,copy)NSString * name;//房间名称
@property(nonatomic,copy)NSString * roomId;//房间id
@property(nonatomic,assign)NSInteger  status;//1-有效;2-无效
@end
@interface HKUnitsModel : HKBaseModel
@property(nonatomic,copy)NSString * unit;
@end
@interface HKBuildingModel : HKBaseModel
@property(nonatomic,copy)NSString * buildingName;
@property(nonatomic,copy)NSString * buildingId;
@property(nonatomic,copy)NSArray * units;
@end

NS_ASSUME_NONNULL_END
