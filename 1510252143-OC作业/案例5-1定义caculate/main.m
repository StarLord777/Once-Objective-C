//
//  main.m
//  案例5-1定义caculate
//
//  Created by 30 on 17/12/21.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Calculate.h"
#import "Calculate+multi.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
//2）	定义一个表示计算的类，类名为Calculate。
//2）在Caculate类中定义addition和 subtraction两个方法，分别用来计算加法和减法。
//3）创建Caculate类的分类，分类名为multi，分类中添加方法multipliation，用来计算乘法
        
        
        Calculate *c=[Calculate new];
        
        int addresult=[c addition:10 and:5];
        NSLog(@"10+5=%d",addresult);
        NSLog(@"\n");
        
        int subresult=[c subtraction:10 and:5];
        NSLog(@"100-49=%d",subresult);
        NSLog(@"\n");
        
        int multiresult=[c multipliation:10 and:5];
        NSLog(@"10*5=%d",multiresult);
        
        
        
        
        
        
    }
    return 0;
}
