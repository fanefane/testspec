//
//  SHPathConfig.h
//  ShiHui
//
//  Created by Fane on 2018/11/21.
//  Copyright © 2018 ShiHui. All rights reserved.
//

#ifndef SHPathConfig_h
#define SHPathConfig_h
#import <Foundation/Foundation.h>

/** 地址拼接 */
#define ImageUrl(imageId)       ([NSString stringWithFormat:@"%@/pic/%@",ImageBaseUrl,imageId])
#define ImagePlaceholder        ([UIImage imageNamed:@"icon_placeholder"])
/**用户相关 */

///校验手机号是否注册过
#define UserCheckRegistPath      @"/user/checkRegistered/"

///发送验证码
#define UserSendVerCodePath      @"/message/sendSmsCode"

///图片验证码
#define UserImageVerCodePath     @"/message/imageVerifyCode/"

///手机号注册
#define UserPhoneRegistPath      @"/user/register"

///手机号验证码登录
#define UserPhoneAndVerCodePath  @"/user/loginsms"
///手机号密码登录
static NSString  * const  UserPhoneAndPwdPath  =  @"/user/manage/login";
///用户资料
static NSString  * const  userDetailPath  =  @"/user/userDetail";
///退出登录
static NSString  * const  UserLogoutPath  =  @"/user/logout";

///微信登录
#define UserWechatLoginPath      @"/wechat/getWechatDetail"

///重置密码
#define UserResetPwdPath         @"/user/resetPassword"

///得到当前登录的用户
#define CurrentUserPath          @"/user/currentUser"

///设置密码
#define UserUpdatePasswordPath    @"user/updatePassword"

///校验密码
#define UserCheckPassword    @"/user/checkPassword"

///修改密码(用旧密码修改)
#define UserModifyPassword    @"/user/modifyPassword"

///检测手机号是否绑定过
#define UserCheckPhonePath       @"/user/checkBind"

///绑定手机号
#define UserBindPhonePath        @"/user/bind"

///修改用户信息
//#define UserUpdateReqVoPath      @"/user/userModify"
#define UserUpdateMsgPath        @"/user/userModify"

///上传文件
#define   UpLoadDataFilePath     @"/data/file"

/**消息相关 */

///消息列表
#define   PushMsgListPath     @"/user/push/msg/list"
///标记已读
#define   PushMsgReadPath     @"/user/push/msg/read"
///未读消息查询
#define   PushMsgNoReadCountPath @"/user/push/msg/noReadCount"
///删除消息
#define   PushMsgDeletePath   @"/user/push/msg/del"

/**小区相关 */

///邮局关联的小区列表
#define  CommunityListPath     @"/community/list"
//跨服务中心人员(跨小区)所包含的小区列表
#define  RepairCommunityListPath  @"/repair-things/communityid/list"
/// 小区搜索
#define  SearchCommunityPath     @"/community/search"

///城市列表
#define  CityListPath            @"/data/city"

///加入小区
#define  JoinCommunityPath       @"/community/user/join"
///用户级别的小区列表
#define  CommunitysByUserPath       @"/community/getCommunitysByChannel"

/*
   报事接口
 */
static NSString  * const  ReportListPath  =  @"/report/list"; //报事工单列表

/*
 报修接口
 */
static NSString  * const  RepairListPath  =  @"/repair-things/list"; //报修工单列表


///报事工单详情
static NSString  * const  ReportDetialPath  =  @"/report/detail";
///去处理报事工单
static NSString  * const  ReportProcessPath  =  @"report/process";
///报事工单人员查询
static NSString  * const  ReportAllotPostItPath  =  @"/report/allotPostIt";
///环保工单人员查询
static NSString  * const  EnvironmentAllotPostItPath  =  @"/report/allotPostIt/environment";

///报事工单 指派/转派给受理人
static NSString  * const  ReportAssignPath  =  @"/report/assign";
//关闭报事工单
static NSString  * const  ReportClosePath  =  @"/report/shut";
//完成报事工单
static NSString  * const  ReportFinishPath  =  @"/report/finish";

//图片上传
static NSString  * const  UploadImagePath  =  @"/file/upload";

///工单统计(只统计待指派+待处理+处理中,环保:environmentCount 报修:repairCount 报事:reportCount )
static NSString  * const  ReportStatisticPath  = @"/report/statistic";
///报修工单详情
static NSString  * const  RepairDetialPath  =  @"/repair-things/detail";
///去处修报事工单
static NSString  * const  RepairProcessPath  =  @"/repair-things/process";
///报修工单人员查询
static NSString  * const  RepairAllotPostItPath  =  @"/user/allotRepair";
///报修工单 指派/转派给受理人
static NSString  * const  RepairAssignPath  =  @"/repair-things/assign";
///关闭报修工单
static NSString  * const  RepairClosePath  =  @"/repair-things/shut";
///完成报修工单
static NSString  * const  RepairFinishPath  =  @"/repair-things/finish";

///提交工单
static NSString  * const  RepairSubmitorderPath  =  @"repair-things/order/create";
///取消工单
static NSString  * const  RepairCancelPath  =  @"/repair-things/order/shut";

//报修挂起工单
static NSString  * const  HangupOrderPath  =  @"/repair-things/hangUp";
//报修挂起后的继续
static NSString  * const  HangupOrderContinuePath  =  @"/repair-things/updateAppointment";


///巡检任务列表
static NSString  * const  PatrolTaskListPath  =  @"/patrol/task/list";
/// 开始/完成 线路巡检
static NSString  * const  PatrolTaskStartEndPath  =  @"/patrol/update/patroltask/time";
///巡检点状态更新
static NSString  * const  PatrolDotStatusUpdatePath  =  @"/patrol/update/patrolpoint/status";

///巡检详情
static NSString  * const  PatrolDetialPath  =  @"/patrol/single/circuit";

///异常查询
static NSString  * const  PatrolDotExceptionQueryPath  =  @"/patrol/query/patrolpoint/exception";
///巡检点异常提交
static NSString  * const  PatrolDotExceptionCommitPath  =  @"/patrol/commit/patrolpoint/exception";

/*设备维保*/

///设备维保列表
static NSString  * const  MaintenanceListPath  =  @"/maintenance/list";
///维保详情
static NSString  * const  MaintenanceDetailPath  =  @"/maintenance/detail";
///完成维保
static NSString  * const  MaintenanceFinishPath  =  @"/maintenance/finish";
///漏维保
static NSString  * const  MaintenanceLeakPath  =  @"/maintenance/leak";

/*排班*/
static NSString  * const  ScheduleUserTimesPath  =  @"/schedule/user-times";

///获取服务中心排班时间表
static NSString  * const  ScheduleTimesPath  =  @"/schedule/times";


/*物业基础*/

///根据小区查询楼栋和单元列表
static NSString  * const  FindBuildingAndUnitsPath  =  @"/base/findBuildingAndUnit";

///根据楼栋和单元查询房间列表
static NSString  * const  FindSpaceByBuildingIdAndUnitPath  =  @"/base/findSpaceByBuildingIdAndUnit";
///根据房间查业主信息
static NSString  * const  FindOwnerByRoomIdPath  =  @"/api/common/detail";

/*代收抄表*/
///查询抄表详情
static NSString  * const  MeterReadingQueryInfoPath  =  @"/meter-reading/queryInfo";

///保存抄表信息
static NSString  * const  MeterReadingSavePath  =  @"/meter-reading/save";

/*设备日志*/

///设备基础信息列表
static NSString  * const  EquipmentlogListPath  =  @"/equipmentlog/base/list";
///维保记录
static NSString  * const  EquipmentlogMaintenanceListPath  =  @"/equipmentlog/queryMaintenanceList";
///巡检记录
static NSString  * const  EquipmentlogPatrolListPath  =  @"/equipmentlog/queryPatrolList";
/**访客登记 */

///访客列表
static NSString  * const  VisitorRegisterListPath  =  @"/visit/list";
///访客登记
static NSString  * const  VisitorRegistePath  =  @"/visit/add";
///访客详情
static NSString  * const  VisitorRegisterDetailPath  =  @"/visit/detail";
///访客离开
static NSString  * const  VisitorRegisterLeavePath  =  @"/visit/leave";


/** 投诉、表扬*/

///投诉、表扬 统计（待处理+处理中）
static NSString  * const  ComplainCountPath  =  @"/proposal/statistic";

///投诉 列表
static NSString  * const  ComplainListPath  =  @"/proposal/list";
///投诉 详情
static NSString  * const  ComplainDetailPath  =  @"/proposal/detail";
///投诉 受理
static NSString  * const  ComplainAcceptPath  =  @"/proposal/accept";
///投诉 处理完成
static NSString  * const  ComplainFinishPath  =  @"/proposal/finish";
///投诉 取消
static NSString  * const  ComplainClosePath  =  @"/proposal/close";


///表扬 列表
///表扬 统计（待处理+处理中）
//static NSString  * const  PraiseCountPath  =  @"/praise/statistic";

static NSString  * const  PraiseListPath  =  @"/praise/list";
///表扬 详情
static NSString  * const  PraiseDetailPath  =  @"/praise/detail";
///表扬 受理
static NSString  * const  PraiseAcceptPath  =  @"/praise/accept";
///表扬 处理完成
static NSString  * const  PraiseFinishPath  =  @"/praise/finish";
///表扬 取消
static NSString  * const  PraiseClosePath  =  @"/praise/close";

/** 住户 */
///住户列表
static NSString  * const  TenementListPath  =  @"/pms/tenement/list";
///住户详情
static NSString  * const  TenementDetailPath  =  @"/pms/tenement/detail";

/** 车辆 */
///车辆列表
static NSString  * const  CarListPath  =  @"/car-info/list";
///车辆详情
static NSString  * const  CarDetailPath  =  @"/car-info/queryDetail";

///SDK 登录授权
static NSString  * const  ThirdpartyPath  =  @"thirdparty/user/login";

#endif /* SHPathConfig_h */
