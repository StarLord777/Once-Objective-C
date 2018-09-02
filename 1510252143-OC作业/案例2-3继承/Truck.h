//
//  Truck.h
//  OC
//
//  Created by 30 on 17/12/14.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Car.h"

@interface Truck : Car

//子类Truck ，声明变量_loadWeight 对brake方法重写
//并且在brake方法中访问父类的brake方法，并且声明实现unload方法

{
    int _loadWeight;
}

-(void)setLoad:(int)load;
-(int)getLoadweight;

-(void)brake;

-(void)unload;



@end
