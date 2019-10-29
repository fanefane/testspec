//
//  UICollectionView+Extern.h
//  Qin
//
//  Created by Fane on 2018/11/27.
//  Copyright © 2018 ShiHui. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UICollectionView (Extern)

-(void)registerNibs:(NSArray *)nibs;

- (void)addHeaderRefreshSelector:(SEL)selector target:(id)target;
- (void)addFooterRefreshSelector:(SEL)selector target:(id)target;
- (void)endRefresh;

@end

