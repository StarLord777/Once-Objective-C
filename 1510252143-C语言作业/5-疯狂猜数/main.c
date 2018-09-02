#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    //产生随机数
    int suiji=arc4random_uniform(1000)+1;
    //printf("%d\n",suiji);
    //定义用户输入
    int player;
    //10次猜的机会-----------------
    int flag=1;
    int count=1;
    while (flag) {
        if (count<=10) {
            printf("第%d次竞猜,请输入您的数字1-1000:\n",count);
            scanf("%d",&player);
            //判断
            if (player==suiji) {
                printf("恭喜您！！！猜中了！\n");
                flag=0;
            }else if (player>suiji)
                printf("对不起，您猜大了\n");
            else if (player<suiji)
                printf("对不起，您猜小了\n");
            
            
            
            count++;
        }else{
            printf("猜了10次都没中，你运气真差\n");
            flag=0;
        }
    }
    
    
    printf("游戏结束\n");
    
    
    
    return 0;
}
