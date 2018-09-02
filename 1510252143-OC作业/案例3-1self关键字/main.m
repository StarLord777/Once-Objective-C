//
//  main.m
//  案例3-1self关键字
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "iPhone.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        //定义一个表示手机的类，类名为iPhone
        //在iPhone类中定义一个表示屏幕大小的_size成员变量
        //声明一个display方法，并在此方法声明一个和成员变量相同的局部变量_size。
        //在display方法中分别对这两个变量进行访问。
        //定义测试文件main.m，并在其中创建iPhone类的实例对象，
        //并且对成员变量进行赋值，最后调用display方法
        
        iPhone *i=[iPhone new];
        [i setSize:5];
        [i display];
        
        
        
    }
    return 0;
}
