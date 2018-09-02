//
//  Calculate.h
//  OC
//
//  Created by 30 on 17/12/21.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Calculate : NSObject

//2）	定义一个表示计算的类，类名为Calculate。
//2）在Caculate类中定义addition和 subtraction两个方法，分别用来计算加法和减法。
//3）创建Caculate类的分类，分类名为multi，分类中添加方法multipliation，用来计算乘法


-(int)addition:(int)n1 and:(int)n2;

-(int)subtraction:(int)n1 and:(int)n2;



@end
