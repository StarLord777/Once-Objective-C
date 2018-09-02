//
//  main.m
//  案例3-6自定义构造方法
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Movie.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
// 1）	定义一个用来表示电影的Movie类，在类中声明都是NSString类型的电影名name和导演名driector属性。
// 2）	声明并且实现一个initWithName:andDriector:方法，此方法需要传递参数driector和参数name。
// 3）	通过传入的参数为类的属性进行赋值。
// 4）	创建测试文件main.m，并在main.m文件中创建Moive类的实例对象，最后通过NSLog函数访问对象的属性

        NSLog(@"haha");
        
        Movie *a=[[Movie alloc] initWithName:@"帕丁顿熊" andDirector:@"不知道"];
        
        NSLog(@"%@,%@",a.name,a.director);
        
        
        
        
        
    }
    return 0;
}
