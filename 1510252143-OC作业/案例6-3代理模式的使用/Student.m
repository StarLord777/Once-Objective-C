//
//  Student.m
//  OC
//
//  Created by 30 on 17/12/22.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Student.h"

@implementation Student


-(void)findHouse{
    NSLog(@"学生%@想找房子",_name);
    [self.delegate studentFindHouse:self.name];
}











@end
