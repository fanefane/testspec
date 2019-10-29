//
//  HKBaseModel.h
//  ShiHui
//
//  Created by Fane on 2018/12/7.
//  Copyright © 2018 shihui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YYModel.h"
#import "NSDictionary+objectForKey.h"
#import "NSMutableDictionary+SafeSetter.h"
#import "NSObject+help.h"

NS_ASSUME_NONNULL_BEGIN

@interface HKBaseModel : NSObject <NSCopying, NSCoding, YYModel>

+ (instancetype)instanceWithDictionary:(NSDictionary*)dic;

@end

NS_ASSUME_NONNULL_END
