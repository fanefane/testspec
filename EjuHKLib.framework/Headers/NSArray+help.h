//
//  NSArray+help.h
//  ShiHui
//
//  Created by Fane on 2018/12/12.
//  Copyright © 2018 shihui. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (help)

//是否包含元素object
- (BOOL)hasObject:(id)obj;
-(id)safeObjectAtIndex:(NSUInteger)index;
@end

NS_ASSUME_NONNULL_END
