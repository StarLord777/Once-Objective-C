//
//  main.m
//  案例6-1遵守多个协议
//
//  Created by 30 on 17/12/22.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
//        3）	定义两个协议，协议名分别为OneProtocol和OtherProtocol。
//        2）在OneProtocol和OtherProtocol协议中，分别定义play和 study两个方法。
//        3）定义一个类Person，类的声明中遵守协议，类的实现中实现协议方法。
//        4）在main.m文件中，测试方法是否可用
        
        
        Person *p=[Person new];
        [p study];
        [p play];
        
        
        
        
        
    }
    return 0;
}
