//
//  SHUserInfo.h
//  ShiHui
//
//  Created by Fane on 2018/12/7.
//  Copyright © 2018 shihui. All rights reserved.
//

#import "HKBaseModel.h"


@interface SHUserInfo : HKBaseModel

@property (nonatomic, strong) NSString *nick;
@property (nonatomic, strong) NSString *mobile;
@property (nonatomic, strong) NSString *headPortrait;
@property (nonatomic, strong) NSString *age;
@property (nonatomic, strong) NSString *sex;//性别 0 男 1 女
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *userName;//用户登录名
@property (nonatomic, copy) NSString *jobName;//职位名称 6:经理,7:管家2:督导,1:客服, 3:维修工,4:保洁, 8:保安,9:保绿,10:城市房屋负责人,5:其它 11兼职管家 12拓维人员 20服务生 21:临时服务生 22:社长 23:惠长 24:工程主管
@property (nonatomic, copy) NSString *mid;//服务中心id
@property (nonatomic, copy) NSString *serviceId;//服务中心Id
@property (nonatomic, copy) NSString *fullName;//用户姓名
@property (nonatomic, copy) NSString *companyName;//
@property (nonatomic, copy) NSString *serviceName;//服务中心
@property (nonatomic, assign) NSInteger job;//
@property (nonatomic, strong) NSString *cityId;
@property (nonatomic, strong) NSString *cityName;
@property (nonatomic, assign)BOOL isManager;
@property (nonatomic, strong) NSString *communityName;
@property (nonatomic, strong) NSString *communityId;//小区id

//false不需要设置新密码  true需要设置
@property (nonatomic, assign) BOOL     needPassword;

@property (nonatomic, strong) NSString *constellation;
@property (nonatomic, strong) NSString *regSource;

@property (nonatomic, strong) NSString *roleType;

@property (nonatomic, strong) NSString *avatar;
@property (nonatomic, strong) NSString *isHeaderOffice;// 1 总部 
@property (nonatomic, strong) NSString *shareCommunityId;// 报修工单筛选小区

@property (nonatomic, strong) NSString *token;

@end

