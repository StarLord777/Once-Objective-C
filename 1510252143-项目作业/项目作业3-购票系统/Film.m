//
//  Film.m
//  OC
//
//  Created by 30 on 17/11/24.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Film.h"

@implementation Film

//打印电影基本信息
-(void)filmBaseinfo{
    NSLog(@"-----本场电影基本信息-----");
    NSLog(@"编   号：%d",_filmid);
    NSLog(@"电影名称：%@",_filmName);
    NSLog(@"观影日期：%@",_now_date);
    NSLog(@"价   格：%@\n\n",_price);
}
//打印电影详细信息
-(void)filmInfo{
    NSLog(@"-----本场电影详细信息-----");
    NSLog(@"编   号：%d",_filmid);
    NSLog(@"电影名称：%@",_filmName);
    NSLog(@"导   演：%@",_director);
    NSLog(@"主   演：%@",_mainPerformer);
    NSLog(@"上映日期：%@",_first_date);
    NSLog(@"观影日期：%@",_now_date);
    NSLog(@"地   点：%@",_loc);
    NSLog(@"价   格：%@\n\n",_price);
}
//调用打印座位信息
-(void)filmMap{
    [_seat printMap];
}
//选择座位
-(void)selectMap{
    int x,y;
    NSLog(@"请输入您要的排数");
    scanf("%d",&x);
    while (x<1||x>6) {
        NSLog(@"对不起，没有该排数!请重新输入");
        scanf("%d",&x);
    }
    NSLog(@"请输入您要的列数");
    scanf("%d",&y);
    while (y<1||y>10) {
        NSLog(@"对不起，没有该列数!请重新输入");
        scanf("%d",&y);
    }
    int yes=[_seat getX:x andy:y];//判断座位是否已经售出
    while (yes==0) {
        NSLog(@"对不起，该座位的票已售出,请选择别的座位");
        NSLog(@"请输入您要的排数");
        scanf("%d",&x);
        while (x<1||x>6) {
            NSLog(@"对不起，没有该排数!请重新输入");
            scanf("%d",&x);
        }
        NSLog(@"请输入您要的列数");
        scanf("%d",&y);
        while (y<1||y>10) {
            NSLog(@"对不起，没有该列数!请重新输入");
            scanf("%d",&y);
        }
        yes=[_seat getX:x andy:y];
    }
    _row=x;
    _col=y;
    //[_seat updateRow:x andCol:y];打印电影票后再置1；
    NSLog(@"您已选定：%d排，%d列",_row,_col);
}

//打印电影票
-(void)filmCard{
    NSLog(@"******电影票*******");
    NSLog(@"  名称：%@",_filmName);
    NSLog(@"  日期：%@",_now_date);
    NSLog(@"  地点：%@",_loc);
    NSLog(@"  价格：%@",_price);
    NSLog(@"  座位：%d排%d座",_row,_col);
    NSLog(@"*****凭此票入场*****");
    
    [_seat updateRow:_row andCol:_col];
}

-(int)searchx:(int)x y:(int)y{
    int yes=[_seat getX:x andy:y];
    if (yes==0) {
        NSLog(@"已查询到电影票信息");
        NSLog(@"验票完成");
        NSLog(@"正在退票");
        [_seat delRow:x andCol:y];
        NSLog(@"退票成功，正在退款");
        NSLog(@"退款成功，感谢您的使用");
    }else
        NSLog(@"对不起，未查询到相关信息");
    
    return 0;
}


//初始化
-(id)initWithinputId:(int)filmid name:(NSString *)name director:(NSString*)director main:(NSString*)mainPerformer first:(NSString*)first_date now:(NSString*)now_date loc:(NSString*)loc price:(NSString*)price{
    self = [super init];
    if (self) {
        
        _seat=[[Seat alloc] init];//初始化该场次的座位信息
        
        _filmid=filmid;
        _filmName=name;
        _director=director;
        _mainPerformer=mainPerformer;
        _first_date=first_date;
        _now_date=now_date;
        _loc=loc;
        _price=price;
    }
    return self;
}




@end
