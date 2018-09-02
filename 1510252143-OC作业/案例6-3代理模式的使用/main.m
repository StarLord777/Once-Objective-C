//
//  main.m
//  案例6-3代理模式的使用
//
//  Created by 30 on 17/12/22.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Student.h"
#import "Agency.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
//        1）	先创建一个Student类，定义name和delegate两个属性，声明一个findHouse方法。
//        2）	创建一个Agency类。
//        3）	定义一个协议StudentProtocol，协议中声明一个学生找房子的协议方法studentFindHouse:。
//        4）	在学生的实现文件中，实现findHouse方法，让代理帮忙找房子。
//        5）	在Agency类的声明文件中，遵守协议。
//        6）	在Agency类的实现文件中，实现协议方法，帮助学生找房子。
//        7）	在main.m文件中，测试是否实现代理的功能
        
        
        
        Student *stu=[Student new];
        stu.name=@"卡特";
        [stu findHouse];
        
        
        Agency *agen=[Agency new];
        stu.delegate=agen;
        [stu findHouse];
        
        
    }
    return 0;
}
