//
//  Book.h
//  OC
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Book : NSObject
//创建表示书本信息的Book类。
//用@property关键字分别声明float 类型的单价属性price和int类型的页数属性pages。
//用@synthesize关键字对属性进行具体的实现。


@property float price;
@property int pages;



-(void)publiced;






@end
