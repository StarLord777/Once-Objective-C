//
//  main.m
//  案例5-4类扩展
//
//  Created by 30 on 17/12/22.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        Person *p=[Person new];
        
        p.name=@"秦始皇";
        [p study];
        
        
        //p.course
        //无法调用
        
        
        
    }
    return 0;
}
