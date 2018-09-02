//
//  Person.h
//  OC
//
//  Created by 30 on 17/12/21.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Dog.h"
#import "Cat.h"
@interface Person : NSObject

@property (strong) Dog *dog;
@property (weak) Cat *cat;


@end
