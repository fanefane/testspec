//
//  HKBaseCell.h
//  ShiHui
//
//  Created by Fane on 2018/1/15.
//  Copyright © 2018年 HZMC. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface HKBaseCell : UITableViewCell

+ (instancetype)instanceCell:(UITableView *)tableView;
+ (instancetype)instanceCell:(UITableView *)tableView sepStyle:(UITableViewCellSeparatorStyle)style;

+ (instancetype)instanceCell:(UITableView *)tableView indexPath:(NSIndexPath*)indexPath;

+ (instancetype)instanceCustomSeparatorCell:(UITableView *)tableView;


@end
