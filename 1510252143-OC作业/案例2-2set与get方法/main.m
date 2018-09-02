//
//  main.m
//  案例2-2set与get方法
//
//  Created by 30 on 17/12/14.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Date.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        
        //创建日期类 Date
        //声明成员变量_year 和 _month
        //分别设置getset方法，set中设置过滤条件
        //声明一个 timeDisplay 方法
        //测试中 利用set方法赋值
        
        
        Date *d=[Date new];
        
        [d set_year:1997];
        [d set_month:2];
        
        [d timeDisplay];
        
        int y,m;
        y=d.get_year;
        m=d.get_month;
        NSLog(@"%d,%d",y,m);
        
        [d set_month:66];
        [d set_year:-111];
    }
    return 0;
}
