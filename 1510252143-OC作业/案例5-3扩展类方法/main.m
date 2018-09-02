//
//  main.m
//  案例5-3扩展类方法
//
//  Created by 30 on 17/12/22.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSString+reverseString.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
//        1）	先创建NSString的分类名称为reverseString
//        2）	在分类中创建一个名为reverseString的类方法。
//        3）	在类方法中先获取字符串的长度。
//        4）	然后另外重新创建一个字符串，用来放置反转之后的字符
//        5）	最后在while循环中，将字符串中的字符进行位置互换，并且拼接成为新的字符串。
//        6）	最后返回拼接好的字符串
    
    
        NSString *start=[NSString reverseString:@"qjphahaha"];
        
        NSLog(@"%@",start);
    
    
    
    
    }
    return 0;
}
