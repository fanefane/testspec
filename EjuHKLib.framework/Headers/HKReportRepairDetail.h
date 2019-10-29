//
//  HKReportRepairDetail.h
//  Housekeeper
//
//  Created by Fane on 2019/5/14.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseModel.h"

/** 0:待指派，1:待处理，2：处理中，3:已完成，4:已评价，5:已取消*/
typedef enum : NSUInteger {
    OrderStatusTypeWaitingForAssign=0,//待指派         <b指派>
    OrderStatusTypeWaitingForHandle=1,//待处理 报修<b去处理>
    OrderStatusTypeHandle=2,//报修处理中<关闭工单，完成1> & 经理处理中 <关闭，完成1>
    OrderStatusTypeComplete=3,//已完成
    OrderStatusTypeCancel=5,//已取消
} OrderStatusType;

NS_ASSUME_NONNULL_BEGIN

@interface HKReportRepairFlow : HKBaseModel
@property (nonatomic, strong) NSString *statusId;
@property (nonatomic, strong) NSString *statusStr;
@property (nonatomic, strong) NSString *solutionPicture;//repairNotePicture
@property (nonatomic, strong) NSArray *contentVOs;
@property (nonatomic, strong) NSArray *solutionPictureList;

@end

@interface HKReportRepairDetail : HKBaseModel

@property (nonatomic, strong) NSString *orderStatus;

@property (nonatomic, strong) NSString *reportName;

@property (nonatomic, strong) NSString *reportTime;
@property (nonatomic, strong) NSString *appointmentDay;
@property (nonatomic, strong) NSString *appointmentTime;
@property (nonatomic, strong) NSString *repairTime;

@property (nonatomic, strong) NSString *groupName;
@property (nonatomic, strong) NSString *groupId;
@property (nonatomic, strong) NSString *reportPhone;
@property (nonatomic, strong) NSString *spaceInfo;
@property (nonatomic, strong) NSString *source;//来源(1:APP报修,2:现场报修,3:电话报修)
@property (nonatomic, strong) NSString *repairArea;

@property (nonatomic, strong) NSString *orderNo;//订单号
@property (nonatomic, strong) NSString *sequence;//缴费单号

@property (nonatomic, strong) NSString *payType;
@property (nonatomic, strong) NSString *payTypeStr;
///订单状态code （0：未提交订单，1：客户已付款，2：客户未付款，3：订单已取消）
@property (nonatomic, strong) NSString *orderTypeCode;
@property (nonatomic, strong) NSString *orderType;

@property (nonatomic, strong) NSArray *repairFeeVOList;

//@property (nonatomic, strong) NSString *category;
@property (nonatomic, strong) NSString *categoryName;
@property (nonatomic, strong) NSString *content;

@property (nonatomic, strong) NSArray *pictureList;
@property (nonatomic, strong) NSArray *imgs;

@property (nonatomic, strong) NSString *soundUrl;
@property (nonatomic, strong) NSString *voice;
@property (nonatomic, strong) NSString *voiceLen;

@property (nonatomic, strong) NSArray<HKReportRepairFlow*> *managerReportFlows;
@property (nonatomic, strong) NSArray *otherReportFlows;

@property (nonatomic, strong) NSString *hangUp;//是否挂起（0：未挂起，1：已挂起）
@property (nonatomic, strong) NSString *workerId;
@property (nonatomic, strong) NSString *mid;


@property (nonatomic, assign) OrderStatusType statusType;

@end

NS_ASSUME_NONNULL_END

/**
 {
 "data": {
 "cancelReason": null,
 "category": 1,
 "categoryName": "安保",
 "content": "医院",
 "groupId": 571945,
 "groupName": "仙鹤小区",
 "managerReportFlows": null,
 "mid": 1087112,
 "otherReportFlows": [
 {
 "displayEffect": 1,
 "statusId": 1,
 "statusStr": "待处理"
 },
 {
 "displayEffect": 0,
 "statusId": 2,
 "statusStr": "处理中"
 },
 {
 "displayEffect": 0,
 "statusId": 3,
 "statusStr": "已完成"
 }
 ],
 "picture": null,
 "pictureList": null,
 "projectId": 1087112,
 "receiverId": 8725,
 "reportId": 11766,
 "reportName": "哈哈",
 "reportPhone": "15255888888888888888",
 "reportTime": 1545641039000,
 "sno": null,
 "solutionInfo": null,
 "solutionPicture": null,
 "solutionPictureList": null,
 "status": 1,
 "userIcon": 0,
 "userId": 416143,
 "voice": null,
 "voiceLen": null
 },
 "errors": [
 ],
 "responseCode": "200",
 "responseMsg": "成功"
 }
 */

