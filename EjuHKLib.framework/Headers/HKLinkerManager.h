//
//  HKLinkerManager.h
//  Housekeeper
//
//  Created by Fane on 2019/6/24.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HKLinkerManager : NSObject

+ (BOOL)openUrl:(NSString*)urlStr;
+ (BOOL)openUrl:(NSString*)urlStr fromNav:(UINavigationController*)nav;
+ (void)openMessageListVC;
@end

NS_ASSUME_NONNULL_END
