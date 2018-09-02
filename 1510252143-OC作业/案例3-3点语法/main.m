//
//  main.m
//  案例3-3点语法
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Laptop.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        
//        1）	定义一个表示坦克的类，类名为Laptop。
//        2）	在Laptop类中声明一个_price的成员变量，并且对_price进行封装，提供set、get方法。
//        3）	在Laptop类中声明并实现一个sell方法。
//        4）	定义测试文件main.m，创建Laptop类的实例对象，并且利用点语法替代set方法进行赋值
        
        
        
        Laptop *n=[Laptop new];
        n.price=999;
        [n sell];
        
        
        
        
        
    }
    return 0;
}
