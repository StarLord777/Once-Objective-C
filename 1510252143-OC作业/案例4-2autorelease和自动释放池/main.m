//
//  main.m
//  案例4-2autorelease和自动释放池
//
//  Created by 30 on 17/12/21.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {//--------!!!!!!!!!!!!!main函数自带一个自动释放池。。
        
//        1）创建一个类，类名为Person。
//        2）在Person类的声明文件中，定义一个age属性。
//        3）在Person类的实现文件中，重写dealloc方法。
//        4）在main.m文件中，查看对象释放的时间以及引用计数器的变化
        
        
        @autoreleasepool {
            
        }
        Person *p=[[[Person alloc] init] autorelease];
        NSLog(@"%d",[p retainCount]);
        p.age=20;
        NSLog(@"my age is %d",p.age);
        
        
        
        
    }
    return 0;
}
