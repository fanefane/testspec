//
//  HKReportDetailViewModel.h
//  Housekeeper
//
//  Created by Fane on 2019/5/21.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewModel.h"
#import "HKReportRepairDetail.h"
#import "HKReportAssginerList.h"
#import "HKReportListTableViewModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface HKReportDetailViewModel : HKBaseViewModel

@property (nonatomic, strong) NSString *reportId;

@property (nonatomic, strong) HKReportRepairDetail *detail;
@property (nonatomic, assign) HKReportRepairOrderType orderType;
@property (nonatomic, assign) int assignType;

///报事/修详情
- (void)loadRepairDetail;
//报事/修接单
- (void)reportProcessRequest;
//报事/修工单人员查询
- (void)reportAllotPostItRequestWithMid:(NSString*)mid;

///报事/修工单 指派/转派给受理人
- (void)reportAssignRequestWithReportId:(NSString*)rId receiveId:(NSString*)receiverId;

///关闭报事/修工单
- (void)reportCloseRequestWithReportId:(NSString*)rId reason:(NSString*)reason;
///完成报事/修工单
- (void)reportFinishRequestWithReportId:(NSString*)rId solutionInfo:(NSString*)info solutionPicture:(NSString*)pics;
- (void)reportFinishRequestWithReportId:(NSString*)rId solutionInfo:(NSString*)info solutionPicture:(NSString*)pics handle:(void(^)(void))handleBlock;

///图片上传
-(void)uploadOrderImage:(UIImage*)image completionBlock:(void(^) (UIImage* UIImage))completionBlock;

///报修 提交订单
- (void)requestSubmitOrderWithMateriaFee:(NSString*)mfee hourFee:(NSString*)hFee payMode:(NSString*)pMode;

- (void)requestHangupOrderWithReason:(NSString*)reason;
- (void)requestHangupOrderContinueWithDayTime:(NSString*)day hour:(NSString*)hour;

@end

NS_ASSUME_NONNULL_END
