//
//  EJReportRepairManager.h
//  iOS-SDK1
//
//  Created by hbz on 2019/10/15.
//  Copyright © 2019 EJU. All rights reserved.
//

#import <Foundation/Foundation.h>

 
NS_ASSUME_NONNULL_BEGIN

@interface EJReportRepairManager : NSObject

/// 跳转报事报修模块
/// @param accessToken 用户token
/// @param communityId 小区id
/// @param loginInvalidBlock 登录过期回调
 
+(void)pushToReportRepairModuleWithAccessToken:(NSString *)accessToken
                                      memberId:(NSString*)mbId
                                   communityId:(NSString *)communityId
                                  loginInvalid:(void(^)(void))loginInvalidBlock;
@end

NS_ASSUME_NONNULL_END
