//
//  Film.h
//  OC
//
//  Created by 30 on 17/11/24.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Seat.h"
@interface Film : NSObject
/*电影类
属性：，编号，名称，导演，主演，上映时间，观影时间，地点，价格
属性里有座位对象
方法：1）打印电影信息
2) 购票，改座位信息
打印购票信息
3）退票，改座位信息
退款，提示
 */
@property    int filmid;
@property    NSString *filmName;//电影名称
@property    NSString *director;//导演
@property    NSString *mainPerformer;//主演
@property    NSString *first_date;//上映日期
@property    NSString *now_date;//观影时间
@property    NSString *loc;//地点
@property    NSString *price;//价格
//变量seat对象存储此场电影的座位信息
@property Seat *seat;
@property int row;
@property int col;


-(void)filmBaseinfo;//打印电影基本信息

-(void)filmInfo;//打印电影详细信息
-(void)filmMap;//打印电影座位信息

-(void)selectMap;//选择座位信息

-(void)filmCard;//打印电影票

-(int)searchx:(int)x y:(int)y;//查询并退票

-(id)initWithinputId:(int)filmid name:(NSString *)name director:(NSString*)director main:(NSString*)mainPerformer first:(NSString*)first_date now:(NSString*)now_date loc:(NSString*)loc price:(NSString*)price;


@end



