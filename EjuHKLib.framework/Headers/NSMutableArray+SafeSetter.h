//
//  NSMutableArray+SafeSetter.h
//  Housekeeper
//
//  Created by Fane on 2019/7/15.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableArray (SafeSetter)
- (void)addSafeValue:(id)value;
- (void)addSafeValue:(id)value withDefault:(id)defaultForUnsafeValue;
@end

NS_ASSUME_NONNULL_END
