//
//  Student.h
//  OC
//
//  Created by 30 on 17/12/22.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StudentProtocol.h"
@interface Student : NSObject


@property NSString* name;
@property id<StudentProtocol> delegate;

-(void)findHouse;



@end
