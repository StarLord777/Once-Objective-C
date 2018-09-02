//
//  Building.m
//  OC
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Building.h"

@implementation Building


-(id)initWithfloor:(int)floor andLoc:(NSString*)loc{
    if (self=[super init]) {
        _floorNum=floor;
        _location=loc;
    }
    return self;
}

-(NSString *)description{
    NSString *str=[NSString stringWithFormat:@"这栋房子有%d层，位于%@",_floorNum,_location];
    return str;
}










@end
