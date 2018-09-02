//
//  Taxi.m
//  OC
//
//  Created by 30 on 17/12/14.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Taxi.h"

@implementation Taxi

-(void)setCom:(NSString*)com{
    _company=com;
}
-(NSString*)getCompany{
    return _company;
}





-(void)accelerate{
    NSLog(@"出租车加速了");
}

-(void)printTickets{
    NSLog(@"该出租车给你开了一张票,公司为%@,车子颜色为%@",_company,_color);
}






@end
