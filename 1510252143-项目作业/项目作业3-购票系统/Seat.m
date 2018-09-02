//
//  Seat.m
//  OC
//
//  Created by 30 on 17/11/24.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Seat.h"

@implementation Seat

-(id)init{
    self=[super init];
    if (self) {
        for (int i=0; i<6; i++) {
            for (int j=0; j<10; j++) {
                map[i][j]=0;
            }
        }
    }
    return self;
}


-(void)printMap{
    printf("座位信息\n");
    printf("00 01 02 03 04 05 06 07 08 09 10\n");
    for (int i=0; i<6;i++) {
        printf("0%d ",i+1);
        for (int j=0; j<10; j++) {
            if (map[i][j]) {
                printf(" @ ");
            }else printf(" + ");
        }
        printf("\n");
    }
}

-(void)updateRow:(int)x andCol:(int)y{
    map[x-1][y-1]=1;
}
-(void)delRow:(int)x andCol:(int)y{
    map[x-1][y-1]=0;
}

-(int)getX:(int)x andy:(int)y{
    if (map[x-1][y-1]==1) {
        return 0;
    }else
        return 1;
}

@end
