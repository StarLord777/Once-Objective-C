//
//  main.m
//  案例2-4多态
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ColorPrinter.h"
#import "BlackPrinter.h"
#import "Person.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        
        //定义一个打印机类 Printer  声明并实现print方法
        //定义两个子类  ColorPrinter 和  BlackPrinter
        //两个子类中对print方法进行重写
        
        //定义一个操作测试类， Person 并且在此类中声明和实现一个doPrint方法
        //在此方法中调用Printer类的print方法
        
        //主函数中创建   ColorPrinter  和BlackPrinter 的实例对象
        //最后将对两个类设置1和2 的代号，做一个if循环，来判断传入的子类是哪个指针
        //当输入不同子类的指针的时候就调用不同子类的同名方法；
        
        
        Person *p=[Person new];
        
        
        
        ColorPrinter *colo=[ColorPrinter new];
        BlackPrinter *blac=[BlackPrinter new];
        
        int n;
        NSLog(@"ColorPrinter 1,BlackPrinter 2,请输入代号");
        while (1) {
            scanf("%d",&n);
            if (n==1) {
                [p doPrint:colo];
            }else if (n==2) {
                [p doPrint:blac];
            }else
                NSLog(@"请输入正确的代号");
        }
        
        
        
        
    }
    return 0;
}
