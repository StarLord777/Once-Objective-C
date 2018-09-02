//
//  Cinema.m
//  OC
//
//  Created by 30 on 17/11/30.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "Cinema.h"

@implementation Cinema

-(id)init{
    self = [super init];
    if (self) {
        
        film100[1]=[[Film alloc] initWithinputId:1 name:@"肖申克的救赎" director:@"弗兰克.德拉邦德" main:@"蒂姆罗宾斯/摩根弗里曼/鲍勃冈顿" first:@"1994年" now:@"2018-01-01.14:00" loc:@"1号厅" price:@"23.50元"];
        film100[2]=[[Film alloc] initWithinputId:2 name:@"这个杀手不太冷" director:@"吕克贝松" main:@"让雷诺/娜塔莉波特曼" first:@"1994" now:@"2018-01-01.13:10" loc:@"3号厅" price:@"38.00元"];
        film100[3]=[[Film alloc] initWithinputId:3 name:@"辛德勒的名单" director:@"史蒂文斯皮尔伯格" main:@"连姆尼森/本金斯利/拉尔夫费因斯" first:@"1993" now:@"2018-01-01.9:00" loc:@"1号厅" price:@"45.00元"];
        film100[4]=[[Film alloc] initWithinputId:4 name:@"盗梦空间" director:@"克里斯托弗诺兰" main:@"莱昂纳多迪卡普里奥/艾伦佩吉" first:@"2010" now:@"2018-01-01.16:40" loc:@"2号厅" price:@"31.00元"];
        film100[5]=[[Film alloc] initWithinputId:5 name:@"泰坦尼克号" director:@"詹姆斯卡梅隆" main:@"莱昂纳多迪卡普里奥/凯特温斯莱特" first:@"1997" now:@"2018-01-01.20:00" loc:@"1号厅" price:@"29.00元"];
        film100[6]=[[Film alloc] initWithinputId:6 name:@"正义联盟" director:@"扎克施耐德" main:@"本阿弗莱克/亨利卡维尔/盖尔加朵" first:@"2017-11-17" now:@"2018-01-01.21:00" loc:@"3号厅" price:@"36.00元"];
        film100[7]=[[Film alloc] initWithinputId:7 name:@"雷神3：诸神黄昏" director:@"塔伊加维迪提" main:@"克里斯海姆斯沃斯/汤姆希德勒斯顿" first:@"2017-1-03" now:@"2018-01-02.10:00" loc:@"2号厅" price:@"29.00元"];
        film100[8]=[[Film alloc] initWithinputId:8 name:@"东方快车谋杀案" director:@"肯尼斯布拉纳" main:@"肯尼斯布拉纳/佩内洛普克鲁兹/威廉达福/朱迪丹奇" first:@"2017-11-10" now:@"2018-01-02.14:00" loc:@"1号厅" price:@"39.00元"];
        films_num=8;
    }
    return self;
};

-(void)listFilm{
    int i=1;
    while (film100[i]!=NULL) {
        [film100[i] filmBaseinfo];
        i++;
    }
}

-(void)selectFilmid{
    NSLog(@"请选择电影序号：");
    //int filmid;//这里与类定义中同名冲突了
    scanf("%d",&filmid);
    while (filmid<1||filmid>films_num) {
        NSLog(@"请输入正确的电影编号!");
        scanf("%d",&filmid);
    }
    [film100[filmid] filmInfo];//打印电影详细信息
    [film100[filmid] filmMap];//打印电影座位信息
}

-(int)enterBuy{
    //选择座位
    [film100[filmid] selectMap];
    //确认支付
    int x;
    NSLog(@"请确认购买，购买-1 取消-0");
    scanf("%d",&x);
    while (x<0||x>1) {
        NSLog(@"请输入正确的选项");
        scanf("%d",&x);
    }
    if (x==0) {
        NSLog(@"已取消此次购买，感谢您的参与");
        return 0;
    }else{
        NSLog(@"正在支付...");
        NSLog(@"支付成功.正在打印电影票，请稍等");
    }
    //打印电影票
    [film100[filmid] filmCard];
    return 0;
}

-(void)shouhou{
    int n,x,y;
    NSLog(@"请输入您的电影票基本信息");
    NSLog(@"电影编号：");
    scanf("%d",&n);
    while (n<1||n>films_num) {
        NSLog(@"请输入正确的电影编号!");
        scanf("%d",&n);
    }
    NSLog(@"座位信息，排：");
    scanf("%d",&x);
    while (x<1||x>6) {
        NSLog(@"对不起，没有该排数!请重新输入");
        scanf("%d",&x);
    }
    NSLog(@"列:");
    scanf("%d",&y);
    while (y<1||y>10) {
        NSLog(@"对不起，没有该列数!请重新输入");
        scanf("%d",&y);
    }
    NSLog(@"正在查询，请稍后");
    [film100[n] searchx:x y:y];    
}

@end
