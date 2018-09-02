//
//  main.m
//  案例4-3比较strong和weak修饰的property属性的不同
//
//  Created by 30 on 17/12/21.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Dog.h"
#import "Cat.h"
#import "Person.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
//1）	分别创建三个类，类名为Dog、Cat和Person。
//2）	在Person类的声明文件中，用strong定义一个Dog类的属性，用weak定义一个Cat类的属性。
//3）	在main.m文件中创建Dog对象和Cat对象，查看两个对象释放的时间
     
        
        Dog *d=[[Dog alloc] init];
        Cat *c=[[Cat alloc] init];
        Person *p=[[Person alloc] init];
        
        p.dog=d;
        p.cat=c;
        
        d=nil;          //dog强引用，这里不被释放
        //NSLog(@"--------------------------");
        c=nil;
        //NSLog(@"--------------------------");
        
        
        
        
        
        
        
        
        
    }
    return 0;
}
