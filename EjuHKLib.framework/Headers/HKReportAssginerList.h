//
//  HKReportAssginerList.h
//  Housekeeper
//
//  Created by Fane on 2019/5/21.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKAssignerItem : HKBaseModel
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *userName;

@property (nonatomic, assign) BOOL selected;

@end

@interface HKReportAssginerList : HKBaseModel

@property (nonatomic, strong) NSArray <HKAssignerItem*> *userAllotList;
@property (nonatomic, strong) NSString *userTypeName;
@property (nonatomic, strong) NSString *userType;


@end

NS_ASSUME_NONNULL_END
