//
//  NSMutableArray+sort.m
//  OC
//
//  Created by 30 on 17/12/22.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "NSMutableArray+sort.h"

@implementation NSMutableArray (sort)


-(NSMutableArray *)sortedArrayNum:(NSMutableArray *)array{
    for (int i=0; i<[array count]; i++) {
        for (int j=i+1; j<[array count]; j++) {
            int a=[[array objectAtIndex:i] intValue];
            int b=[[array objectAtIndex:j] intValue];
            if (a>b) {
                [array replaceObjectAtIndex:i withObject:[NSString stringWithFormat:@"%d",b]];
                [array replaceObjectAtIndex:j withObject:[NSString stringWithFormat:@"%d",a]];
            }
        }
    }
    
    NSMutableArray *finish=[NSMutableArray array];
    for (int i=0; i<[array count]; i++) {
        [finish addObject:array[i]];
    }
    return finish;
}







@end
