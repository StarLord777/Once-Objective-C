//
//  Taxi.h
//  OC
//
//  Created by 30 on 17/12/14.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Car.h"

@interface Taxi : Car

//子类Taxi中声明变量 _company  并对accelerate方法进行重写
//声明printTickets方法

{
    NSString * _company;
}

-(void)setCom:(NSString*)com;
-(NSString*)getCompany;

-(void)accelerate;

-(void)printTickets;




@end
