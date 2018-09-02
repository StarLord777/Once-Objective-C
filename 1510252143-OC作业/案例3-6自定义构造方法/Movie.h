//
//  Movie.h
//  OC
//
//  Created by 30 on 17/12/15.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Movie : NSObject
// 1）	定义一个用来表示电影的Movie类，在类中声明都是NSString类型的电影名name和导演名driector属性。
// 2）	声明并且实现一个initWithName:andDriector:方法，此方法需要传递参数driector和参数name。
// 3）	通过传入的参数为类的属性进行赋值


@property NSString* name;
@property NSString* director;



-(id)initWithName:(NSString*)name andDirector:(NSString*)dir;











@end
