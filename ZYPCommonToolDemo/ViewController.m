//
//  ViewController.m
//  ZYPCommonToolDemo
//
//  Created by 赵云鹏 on 16/6/22.
//  Copyright © 2016年 赵云鹏. All rights reserved.
//

#import "ViewController.h"
#import "ZYPCommonTool.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    /** DemoTest */
    
    // 将字符串数组按照元素首字母顺序进行排序分组
    NSArray * stringArray = @[@"guangzhou", @"shanghai", @"北京", @"henan", @"hainan"];
    NSDictionary * characterDictionary = [ZYPCommonTool dictionaryOrderByCharacterWithOriginalArray:stringArray];
    NSLog(@"\n\n将字符串数组按照元素首字母顺序进行排序分组 \n%@",characterDictionary);
    
    // 计算上次日期距离现在多久
    NSLog(@"\n\nresult: %@", [ZYPCommonTool timeIntervalFromLastTime:@"2015年12月8日 15:50"
                                                      lastTimeFormat:@"yyyy年MM月dd日 HH:mm"
                                                       ToCurrentTime:@"2015/12/08 16:12"
                                                   currentTimeFormat:@"yyyy/MM/dd HH:mm"]);
    
}



@end
