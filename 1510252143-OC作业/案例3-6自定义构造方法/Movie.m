//
//  Movie.m
//  OC
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Movie.h"

@implementation Movie

-(id)initWithName:(NSString*)name andDirector:(NSString*)dir{
    if (self=[super init]) {
        _name=name;
        _director=dir;
    }
    return self;
}








@end
