//
//  main.m
//  案例6-2协议遵守协议
//
//  Created by 30 on 17/12/22.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Student.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
//        定义三个协议，分别为MyProtocol、YouProtocol和TheyProtocol。
//        2）在YouProtocol和TheyProtocol中，分别定义climb和travel两个方法，且MyProtocol遵守了这两个协议。
//        3）定义一个类，类名为Student，且Student类遵守了MyProtocol协议。
//        4）在main.m文件中，测试协议方法是否可用。
        
        
        Student *stu=[Student new];
        
        [stu climb];
        [stu travel];
        
    }
    return 0;
}
