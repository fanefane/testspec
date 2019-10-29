//
//  EJPropertyKit.h
//  iOS-SDK1
//
//  Created by hbz on 2019/10/15.
//  Copyright © 2019 EJU. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EJPropertyKit : NSObject
///  初始化SDK
/// @param channelId 渠道id 【选填】
+(void)initWithChannelId:(NSString *)channelId;

///  初始化SDK
/// @param channelId 渠道id 【选填】
/// @param themeColor 主题色 【选填】
+(void)initWithChannelId:(NSString *)channelId themeColor:(NSString * __nullable)themeColor;
@end

NS_ASSUME_NONNULL_END
