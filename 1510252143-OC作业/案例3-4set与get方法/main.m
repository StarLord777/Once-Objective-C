//
//  main.m
//  案例3-4set与get方法
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Book.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
//创建表示书本信息的Book类。
//用@property关键字分别声明float 类型的单价属性price和int类型的页数属性pages。
//用@synthesize关键字对属性进行具体的实现。
//在测试文件main.m中，创建Book的实例对象，并且利用点语法对属性进行赋值，最后调用publiced方法
        
        
        Book *b=[Book new];
        
        b.pages=777;
        b.price=888;
        [b publiced];
           
    }
    return 0;
}
