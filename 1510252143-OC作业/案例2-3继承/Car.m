//
//  Car.m
//  OC
//
//  Created by 30 on 17/12/14.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Car.h"

@implementation Car

-(void)setColor:(NSString*)col{
    _color=col;
}
-(NSString*)getColor{
    return _color;
}

-(void)brake{
    NSLog(@"车子刹车了");
}

-(void)accelerate{
    NSLog(@"车子加速了");
}
@end
