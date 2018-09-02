//
//  Seat.h
//  OC
//
//  Created by 30 on 17/11/24.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Seat : NSObject
/*
 座位类，每个座位对象对应一个电影对象，
 属性：二维数组座位
 方法:打印座位，并能根据买票情况保存已经售出的座位显示
    判断座位是否已经售出
    退票座位还原
 */
{
    int *map[6][10];
}

-(id)init;

-(void)printMap;
-(void)updateRow:(int)x andCol:(int)y;
-(void)delRow:(int)x andCol:(int)y;
-(int)getX:(int)x andy:(int)y;

@end
