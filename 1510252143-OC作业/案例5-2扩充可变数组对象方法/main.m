//
//  main.m
//  案例5-2扩充可变数组对象方法
//
//  Created by 30 on 17/12/21.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSMutableArray+sort.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
//创建NSMutableArray类的分类sort
//2）在分类sort中声明一个sortedArrayNum的对象方法，该方法内部封装了冒泡排序法。
//3方法sortedArrayNum返回一个NSMutableArray类型的数组。
//4）定义一个测试文件，来测试此方法是否成功创建
        
        NSMutableArray *array=[[NSMutableArray alloc] initWithObjects:@"47",@"30",@"99",@"77",@"17", nil];
        
        NSMutableArray *finish=[array sortedArrayNum:array];
        
        NSLog(@"%@",finish);
        
        
    }
    return 0;
}
