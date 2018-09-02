//
//  Cinema.h
//  OC
//
//  Created by 30 on 17/11/30.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Film.h"
//------------------------------
//写好以后再搬进来，将所有film类的功能在cinema中实现（调用）
//
//在cinema类中实例化多个film对象，并赋值，
//主函数体中，流程控制全部改为已cinema对象为主体，放弃以film对象（太乱）

//cinema流程中要实现的功能（调用）
//1.循环打印电影基本信息列表
//2.选择电影编号，显示电影详细信息，显示电影座位信息
//3.选择座位
//4.确认，支付，打印购票信息

@interface Cinema : NSObject
{
    Film *film100[100];
    int filmid;
    int films_num;//存储电影个数
}

-(id)init;//初始化，为N多个电影对象赋值

-(void)listFilm;//打印电影基本信息列表，循环调用film对象的打印基本信息方法

-(void)selectFilmid;//选择电影序号,显示电影详细信息，座位信息

-(int)enterBuy;//购买电影票,选择座位，支付，打印电影票

-(void)shouhou;


@end
