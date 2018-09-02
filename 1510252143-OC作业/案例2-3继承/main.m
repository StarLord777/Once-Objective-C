//
//  main.m
//  案例2-3继承
//
//  Created by 30 on 17/12/14.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Taxi.h"
#import "Truck.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        //创建汽车类 Car 子类 Taxi 子类 Truck；
        //父类声明变量 _color  两个方法  brake刹车 accelerate加速
        
        //子类Taxi中声明变量 _company  并对accelerate方法进行重写
        //声明printTickets方法
        
        //子类Truck ，声明变量_loadWeight 对brake方法重写
        //并且在brake方法中访问父类的brake方法，并且声明实现unload方法
        
        //测试分别创建Taxi和Truck实例对象，对继承于父类的成员变量_color进行赋值
        //并调取各自类的所有方法
        
        Taxi *t=[Taxi new];
        [t accelerate];
        [t setColor:@"red"];
        [t setCom:@"顺丰"];
        [t printTickets];
        NSLog(@"\n");
        
        Truck *k=[Truck new];

        [k brake];
        [k setLoad:2000];
        [k setColor:@"black"];
        [k unload];

        
        
        
        
        
        
        
        
    }
    return 0;
}
