//
//  Tank.m
//  OC
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Tank.h"

@implementation Tank


-(void)drive{
    NSLog(@"坦克正在行驶");
}


-(void)fire{
    [self drive];
    NSLog(@"坦克向目标开火");
}




@end
