//
//  main.m
//  案例3-2self关键字
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Tank.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        
//        1)	定义一个表示坦克的类，类名为Tank。
//        2)	在Tank类中声明分别drive和fire方法。
//        3)	在fire方法内部通过self关键字调用drive方法。
//        4)	定义测试文件main.m，并在其中创建Tank类的实例对象,最后只调用fire方法
        
        
        Tank *t=[Tank new];
        
        [t fire];
        
        
        
        
    }
    return 0;
}
