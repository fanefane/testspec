//
//  HKReportListViewModel.h
//  Housekeeper
//
//  Created by hbz on 2019/5/20.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewModel.h"
//#import "HKComplainPraiseHeader.h"
#import "HKDropdownMenu.h"
#import "HKReportListTableViewCell.h"
NS_ASSUME_NONNULL_BEGIN
@interface HKComplainPraiseNumModel : HKBaseModel
@property(nonatomic ,assign) NSInteger proposalCount;
@property(nonatomic ,assign) NSInteger praiseCount;
@property(nonatomic ,assign) NSInteger reportCount;
@property(nonatomic ,assign) NSInteger repairCount;
@property(nonatomic ,assign) NSInteger environmentCount;
@end

@interface HKReportListViewModel : HKBaseViewModel
@property(nonatomic ,strong)UIViewController * vc;
@property(nonatomic ,assign)NSInteger pendingCount;//待处理数量
@property(nonatomic ,assign)NSInteger beingProcessedCount;//处理中数量
@property(nonatomic ,assign)NSInteger submitCount;//待指派数量
@property(nonatomic ,strong)NSMutableArray * listArray;
@property(nonatomic ,strong)NSMutableArray * reportlistArray;
@property(nonatomic ,strong)NSMutableArray * repairlistArray;
@property(nonatomic ,strong)NSMutableArray * environmentalListArray;
@property(nonatomic ,assign)NSInteger reportCount;//报事需要处理总订单数
@property(nonatomic ,assign)NSInteger repairCount;//报事需要处理总订单数
@property(nonatomic ,assign)NSInteger environmentCount; //环保需要处理总订单数
@property(nonatomic ,assign)NSInteger proposalCount;//投诉需要处理总数
@property(nonatomic ,assign)NSInteger praiseCount;//表扬需要处理总数
@property(nonatomic ,strong) NSMutableArray * communityLists;
@property(nonatomic ,strong) HKDropdownMenu * __nullable menu;
@property(nonatomic ,assign) BOOL  menuShow;
-(void)getReportListWithPage:(NSInteger)page type:(NSString *)type;
-(void)getReportListWithPage:(NSInteger)page type:(NSString *)type isCount:(BOOL)isCount;

-(void)getRepairListWithPage:(NSInteger)page type:(NSString *)type;
-(void)getRepairListWithPage:(NSInteger)page type:(NSString *)type isCount:(BOOL)isCount;

-(void)getEnvironmentalListWithPage:(NSInteger)page type:(NSString *)type;
-(void)getEnvironmentalListWithPage:(NSInteger)page type:(NSString *)type isCount:(BOOL)isCount;


- (void)requestComplainPraiseCount;
- (void)requeStreportStatistic;
//-(void)rightNavigationViewWithVC:(UIViewController *)vc;//设置右标题 小区筛选
@end

NS_ASSUME_NONNULL_END
