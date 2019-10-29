//
//  EJPublicAPIRequest.h
//  iOS-SDK1
//
//  Created by hbz on 2019/10/15.
//  Copyright © 2019 EJU. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "HKBaseViewModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface EJPublicAPIRequest : NSObject

+(void)requestThirdpartyUserInfoWithToken:(NSString *)accessToken
                                 memberId:(NSString*)mbId
                              communityId:(NSString * )communityId
                                 complete:(void(^)(void))complete;
@end

NS_ASSUME_NONNULL_END
