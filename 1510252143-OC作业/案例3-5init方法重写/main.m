//
//  main.m
//  案例3-5init方法重写
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Gun.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
//        1）	先创建表示枪的Gun类，并且声明一个float类型的射程属性range。
//        2）	在Gun.m文件中对init方法进行重写，并且对此属性赋值。
//        3）	最后main.m测试文件中分别创建Gun类的实例对象，并对属性进行引用。
        
        
        Gun *g=[[Gun alloc] init];
        
        float a=g.range;
        
        NSLog(@"%.2f",a);
        
        
        
        
    }
    return 0;
}
