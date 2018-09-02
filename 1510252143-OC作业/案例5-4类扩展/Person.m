//
//  Person.m
//  OC
//
//  Created by 30 on 17/12/22.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Person.h"

@interface Person()
@property NSString* course;
-(void)teach;

@end


@implementation Person

-(void)study{
    NSLog(@"%@在学习",_name);
}

-(void)teach{
    NSLog(@"%@在教%@课",_name,_course);
}


@end
