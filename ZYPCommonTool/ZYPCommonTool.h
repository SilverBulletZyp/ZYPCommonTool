//
//  ZYPCommonTool.h
//  ZYPCommonToolDemo
//
//  Created by 赵云鹏 on 16/6/22.
//  Copyright © 2016年 赵云鹏. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface ZYPCommonTool : NSObject

#pragma mark - 文件管理

/**
 *  计算磁盘大小
 *
 *  @return 磁盘总空间
 */
+ (CGFloat)diskOfAllSizeMBytes;

/**
 *  计算磁盘可用空间大小
 *
 *  @return 磁盘可用空间大小
 */
+ (CGFloat)diskOfFreeSizeMBytes;

/**
 *  获取指定路径下某文件大小
 *
 *  @param filePath 文件路径
 *
 *  @return 文件大小
 */
+ (long long)fileSizeAtPath:(NSString *)filePath;

/**
 *  获取指定路径文件夹下所有文件大小
 *
 *  @param folderPath 文件夹路径
 *
 *  @return 文件大小
 */
+ (long long)folderSizeAtPath:(NSString *)folderPath;


#pragma mark - 字符串处理

/**
 *  获取字符串(或汉字)首字母
 *
 *  @param string 字符串
 *
 *  @return 首字母
 */
+ (NSString *)firstCharacterWithString:(NSString *)string;

/**
 *  将字符串数组按照元素首字母顺序进行排序分组
 *
 *  @param array 字符串数组
 *
 *  @return 按首字母排序字典
 */
+ (NSDictionary *)dictionaryOrderByCharacterWithOriginalArray:(NSArray *)array;

/**
 *  判断手机号码格式是否正确(Debug)
 *
 *  @param mobile 手机号码
 *
 *  @return 格式正误
 */
+ (BOOL)valiMobile:(NSString *)mobile;

/**
 *  判断邮箱格式是否正确
 *
 *  @param email 邮箱
 *
 *  @return 格式正误
 */
+ (BOOL)isAvailableEmail:(NSString *)email;



#pragma mark - 时间与日期

/**
 *  获取当前时间
 *
 *  @param NSString 时间格式(具体参照注释)
 *
 *  @return 当前时间
 */
+ (NSString *)currentDateWithFormat:(NSString *)format;

/**
 *  计算上次日期距离现在多久(自定义格式)
 *
 *  @param lastTime    上次日期(需要和格式对应)
 *  @param format1     上次日期格式
 *  @param currentTime 最近日期(需要和格式对应)
 *  @param format2     最近日期格式
 *
 *  @return xx分钟前、xx小时前、xx天前
 */
+ (NSString *)timeIntervalFromLastTime:(NSString *)lastTime
                        lastTimeFormat:(NSString *)format1
                         ToCurrentTime:(NSString *)currentTime
                     currentTimeFormat:(NSString *)format2;

/**
 *  计算上次日期距离现在多久(默认格式)
 *
 *  @param lastTime    上次日期
 *  @param currentTime 最近日期
 *
 *  @return xx分钟前、xx小时前、xx天前
 */
+ (NSString *)timeIntervalFromLastTime:(NSDate *)lastTime ToCurrentTime:(NSDate *)currentTime;




#pragma mark - 临时

/**
 *  十六进制字符串转颜色
 *
 *  @param hexColorString 十六进制字符串
 *
 *  @return UIColor类型颜色
 */
+ (UIColor *)getColor:(NSString *)hexColorString;

@end
