//
//  MyProtocol.h
//  OC
//
//  Created by 30 on 17/12/22.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YouProtocol.h"
#import "TheyProtocol.h"
@protocol MyProtocol <NSObject,YouProtocol,TheyProtocol>



@end
