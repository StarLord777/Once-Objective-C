//
//  main.m
//  案例2-1成员变量的引用
//
//  Created by 30 on 17/12/14.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "School.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        //定义一个学校类 School
        //在School类中定义_creatYear 和 _studentNumber 两个成员变量
        //声明voteBestSchool 方法 并在方法的实现中打印两个成员变量
        
        //测试中，创建School类的实例对象，并对成员变量进行赋值，最后调用voteBestSchool方法
        
        School *sch=[School new];
        
        sch->_creatYear=100;
        sch->_studentNumber=47000;
        
        [sch voteBestSchool];
    }
    return 0;
}
