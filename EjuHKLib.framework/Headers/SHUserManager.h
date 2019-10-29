//
//  SHUserManager.h
//  ShiHui
//
//  Created by Fane on 2018/12/7.
//  Copyright © 2018 shihui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SHUserInfo.h"
#import "SHTimer.h"

typedef enum : NSUInteger {
    VerifyCodeTypeRegist=1,
    VerifyCodeTypeLogin,
    VerifyCodeTypeResetPwd,
    VerifyCodeTypeBind,
} VerifyCodeType;


typedef enum : NSUInteger {
    UserRoleTypeNormal,
    UserRoleTypeManager,
    UserRoleTypeHQ,
} UserRoleType;

@class SHCommunityInfo;

@interface SHUserManager : NSObject

+ (instancetype)shareInstance;

@property (nonatomic, strong) SHUserInfo *userInfo;
@property (nonatomic, assign) BOOL hasLogin;

@property (nonatomic, assign) UserRoleType roleType;
@property (nonatomic, strong) NSString *channelId;
@property (nonatomic, copy) void (^loginStatusInvalid) (void);
//用户当前所在小区
@property (nonatomic, strong) SHCommunityInfo *userCommunity;
//未登录下的小区
@property (nonatomic, strong) SHCommunityInfo *preCommunity;

///保存当前登录用户
- (void)saveCurrentUser:(SHUserInfo *)userInfo;
///删除当前登录用户
- (void)deleteCurrentUser;

//登录倒计时
@property (nonatomic,strong) SHTimer * timerManger;//登录和注册时候的倒计时

///是否登录判断，并弹出登录页
- (BOOL)shouldShowLoginView;

///登录信息无效时，立即弹出登录注册页面
- (void)showLoginVCIfNeeded:(int)code;



/**
 Description

 1.获取短信/图片验证码
 2.图片验证码的校验

 @param type        验证码类型
 @param mobile      手机号
 @param imgCode 短信验证码时传nil；非短信验证码而是图片校验时 传图片验证码
 @param successBlock 成功
 @param failBlock 失败
 */
- (void)requestVerCodeWithType:(VerifyCodeType)type mobile:(NSString*)mobile imgCode:(NSString*)imgCode success:(void(^)(int count,id data))successBlock fail:(void(^)(NSString* errorMsg))failBlock;
/**
 
 
 @param mobile 个人信息接口
 @param resultBlock block
 */
-(void)userDetailRequestSuccess:(void(^)(int count))successBlock fail:(void(^)(NSString* errorMsg))failBlock;
/**
 刷新图片验证码

 @param mobile 手机号
 @param resultBlock block
 */
- (void)requestImageVerCode:(NSString*)mobile block:(void(^)(id data))resultBlock;


///手机号密码登录
- (void)loginWithMobile:(NSString*)mobile password:(NSString*)pwd success:(void(^)(int count))successBlock fail:(void(^)(NSString* errorMsg))failBlock;

///手机号验证码登录
- (void)loginWithMobile:(NSString*)mobile verCode:(NSString*)code success:(void(^)(int count))successBlock fail:(void(^)(NSString* errorMsg))failBlock;

///重置密码
- (void)resetPassword:(NSString*)pwd verCode:(NSString*)code mobile:(NSString*)mobile success:(void(^)(int count))successBlock fail:(void(^)(NSString* errorMsg))failBlock;
///退出登录
-(void)logoutRequestSuccess:(void(^)(int count))successBlock fail:(void(^)(NSString* errorMsg))failBlock;
@end

