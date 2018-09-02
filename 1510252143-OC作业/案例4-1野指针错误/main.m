//
//  main.m
//  案例4-1野指针错误
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
//1）	定义一个类，类名为Person。
//2）在Person类的声明中，定义一个age属性。
//3）在Person类的实现中，重写dealloc方法。
//4）在main.m中，操作Person类对象的引用计数器。
        

        
//每个对象内部都保存了一个与之相关联的整数，称为引用计数器，当使用alloc、new或者copy创建一个对象时，对象的引用计数器被设置为1
//给对象发送一条retain消息可以使引用计数器值+1；
//给对象发送一条release消息可以使引用计数器值-1；
//当1个对象的引用计数器值为0时那么他讲被销毁，其占用的内存被系统回收，OC也会自动向对象发送一条dealloc消息，一般会重写dealloc方法，在这里释放相关资源，一定不要直接调用dealloc方法
//可以给对象发送retaincount消息获得当前的引用计数器值。
        
        
        
        
        Person *p=[[Person alloc] init];//初始计数器值为1
        NSLog(@"count:%lu",[p retainCount]);
        [p retain];//+1
        [p retain];//+1  3
        NSLog(@"count:%lu",[p retainCount]);
        [p release];//-1
        NSLog(@"count:%lu",[p retainCount]);
        [p release];
        [p release];
        p=nil;
        
        [p release];


        
        
        
        
        
        
        
    }
    return 0;
}
