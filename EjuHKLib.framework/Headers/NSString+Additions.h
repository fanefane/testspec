//
//  NSString+Additions.h
//  KHealth
//
//  Created by wang hongxi on 13-10-21.
//  Copyright (c) 2013年 Beijing Dayactive CO. LTD. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^PhoneCheckBlock)(NSString *phone,NSRange range);

@interface NSString (Additions)
- (NSString *)md5;
- (NSUInteger)hexValue;
-(long long)decimal;
-(NSString *)dateStringWithDateFormat:(NSString *)dateFormat;

/**
 *  @author ColaBean
 *
 *  设置关键字相关属性
 *
 *  @param keyword    关键字
 *  @param attributed 属性值
 */
- (NSMutableAttributedString *)keyword:(NSString *)keyword attributed:(NSDictionary *)attributed;

/**
 *  @author ColaBean
 *
 *  设置关键字相关属性
 *
 *  @param keyword  关键字
 *  @param color    颜色
 *  @param fontSize 字体大小
 *
 *  @return `NSMutableAttributedString`
 */
- (NSMutableAttributedString *)keyword:(NSString *)keyword color:(UIColor *)color fontSize:(CGFloat)fontSize;

- (NSMutableAttributedString *)keyword:(NSString *)keyword color:(UIColor *)color font:(UIFont*)font;
/**
 是否符合给定规则

 @param set 规则字符串
        如：纯数字@"0123456789"
           带小数点的数字@"0123456789."
 @return 结果
 */
- (BOOL)validateSet:(NSString*)set;

///是否是纯数字
- (BOOL)isDigit;

///是否只有数字和小数点。换行/回车/空格都不符合
- (BOOL)isValidNumberAndDot;


///去除首尾空格、换行
- (NSString*)removeSpaceAndNewline;
///去除所有空格、首尾换行
- (NSString*)removeAllSpaceAndNewline;

///检测字符串中的电话号码
- (void)phoneNumCheck:(PhoneCheckBlock)phoneBlock;

///字符串 to Class的实例
- (id)toClassInstance;
- (Class)toClass;



@end
