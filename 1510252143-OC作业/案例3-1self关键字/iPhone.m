//
//  iPhone.m
//  OC
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "iPhone.h"

@implementation iPhone

-(void)setSize:(float)size{
    _size=size;
}
-(float)getSize{
    return _size;
}




-(void)display{
    float _size=4.5;
    NSLog(@"self->_size=%.1f",self->_size);
    NSLog(@"局部_size=%.1f",_size);
}




@end
