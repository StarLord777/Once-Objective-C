//
//  Laptop.m
//  OC
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Laptop.h"

@implementation Laptop


-(void)setPrice:(float)price{
    _price=price;
}
-(float)getPrice{
    return _price;
}


-(void)sell{
    NSLog(@"Laptop价格是%.2f",_price);
}









@end
