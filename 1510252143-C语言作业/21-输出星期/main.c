#include <stdio.h>
char * to_day(int n);
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    while (1) {
        printf("请输入一个1-7之间的整数\n");
        scanf("%d",&n);
        if (n>7||n<1) {
            printf("请按照提示输入\n");
        }else
            break;
    }
    char *day[10];

    *day=to_day(n);
    printf("%s\n",*day);
    return 0;
}

char * to_day(int n){
    char *day[]={
        "星期一",
        "星期二",
        "星期三",
        "星期四",
        "星期五",
        "星期六",
        "星期日",
    };
    return day[n-1];
}