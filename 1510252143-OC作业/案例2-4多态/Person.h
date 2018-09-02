//
//  Person.h
//  OC
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Printer.h"
@interface Person : NSObject
//定义一个操作测试类， Person 并且在此类中声明和实现一个doPrint方法
//在此方法中调用Printer类的print方法


-(void)doPrint:(Printer *)printer;





@end
