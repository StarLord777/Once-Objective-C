#include <stdio.h>
#include <stdlib.h>
int winOrLose(int x,int computer);
int computerRandom();
int main(int argc, const char * argv[]) {
    //定义规则：石头:0,剪刀：1，布：2；
            //电脑随机出拳，用随机数；
            //判断玩家赢得情况，平局的情况，输的情况，并给出提示；
    int x=1;//定义变量，供玩家输入；
    while (1) {
        printf("请玩家输入要出的拳:石头:0,剪刀：1，布：2；\n");
        scanf("%d",&x);
        if (x<0||x>2) {
            printf("请按照提示输入\n");
        }else
            break;
    }
    //电脑出拳；
    int computer;
    computer=computerRandom();
    
    //比较谁赢
    winOrLose(x, computer);

    return 0;
}


//电脑出拳
int computerRandom(){
    int computer;
    computer=arc4random_uniform(3);
    printf("电脑出的是%d\n",computer);
    return computer;
}

//判断输赢函数
/*
    玩家  电脑
    0      0    平局
    0      1        玩家
    0      2            电脑
    1      0            电脑®
    1      1    平局
    1      2        玩家
    2      0        玩家
    2      1            电脑
    2      2    平局
 */
int  winOrLose(int x,int computer){
    printf("%d,%d\n",x,computer);
    if (x==computer) {
        printf("尴尬，平局了！\n");
        return 0;
    }
    if ((x==1&&computer==2)||(x==0&&computer==1)||(x==2&&computer==0)) {
        printf("恭喜您，YOU WIN！\n");
        return 0;
    }else
        printf("呜呜，输了！\n");
    return 0;
}



















