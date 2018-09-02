//
//  Car.h
//  OC
//
//  Created by 30 on 17/12/14.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Car : NSObject
//父类声明变量 _color  两个方法  brake accelerate
{
    NSString *_color;
}

-(void)setColor:(NSString*)col;
-(NSString*)getColor;

-(void)brake;

-(void)accelerate;



@end
