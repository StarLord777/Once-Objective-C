//
//  Building.h
//  OC
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Building : NSObject

//1）	定义一个用来表示建筑物的Building类，在类中声明int类型的楼层数属性floorNum和NSString类型的地址属性location。
//2）	自定义一个构造方法，将以上两个属性作为参数传入进去。
//3）	对description方法进行重写，并且返回一个一定格式的字符串。

@property int floorNum;
@property NSString *location;

-(id)initWithfloor:(int)floor andLoc:(NSString*)loc;

-(NSString *)description;

@end
