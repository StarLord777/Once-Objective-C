//
//  Date.h
//  OC
//
//  Created by 30 on 17/12/14.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Date : NSObject

//创建日期类 Date
//声明成员变量_year 和 _month
//分别设置getset方法，set中设置过滤条件
//声明一个 timeDisplay 方法
//测试中 利用set方法赋值


{
    int _year;
    int _month;
}

-(void)set_year:(int)year;
-(int)get_year;

-(void)set_month:(int)month;
-(int)get_month;

-(void)timeDisplay;




@end
