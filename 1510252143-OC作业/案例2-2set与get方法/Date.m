//
//  Date.m
//  OC
//
//  Created by 30 on 17/12/14.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Date.h"

@implementation Date

-(void)set_year:(int)year{
    if (year<=0) {
        NSLog(@"年份不正确");
    }else
        _year=year;
}
-(int)get_year{
    return _year;
}

-(void)set_month:(int)month{
    if (month>12||month<1) {
        NSLog(@"该月份不符合地球规则，确认无效");
    }else
        _month=month;
}
-(int)get_month{
    return _month;
}

-(void)timeDisplay{
    NSLog(@"%d年-%d月",_year,_month);
}











@end
