//
//  NSBundle+help.h
//  EjuHKLib
//
//  Created by Fane on 2019/10/25.
//


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (help)


/// 某个资源所在路径
/// @param resourceName 资源文件名
/// @param bundleName 所在的bundle名，和spec里资源所在的bundle要保持一致
+ (NSString*)libResource:(NSString*)resourceName inBundle:(NSString*)bundleName;

/// 资源所在的bundle
/// @param bundleName bundle名，和spec里资源所在的bundle要保持一致
+ (NSURL*)libBundleWithBundleName:(NSString*)bundleName;

/// framework的路径
+ (NSBundle*)libBundle;

@end

NS_ASSUME_NONNULL_END
