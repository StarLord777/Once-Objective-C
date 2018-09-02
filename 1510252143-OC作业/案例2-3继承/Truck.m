//
//  Truck.m
//  OC
//
//  Created by 30 on 17/12/14.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Truck.h"

@implementation Truck

//子类Truck ，声明变量_loadWeight 对brake方法重写
//并且在brake方法中访问父类的brake方法，并且声明实现unload方法

-(void)setLoad:(int)load{
    _loadWeight=load;
}
-(int)getLoadweight{
    return _loadWeight;
}



-(void)brake{
    [super brake];
}

-(void)unload{
    NSLog(@"该货车载重%dkg,车子颜色是%@",_loadWeight,_color);
}





@end
