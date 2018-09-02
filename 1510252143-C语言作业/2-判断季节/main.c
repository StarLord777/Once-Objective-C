#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int month;
    while (1) {
        printf("请输入月份：");
        scanf("%d",&month);
        if (month<1||month>12) {
            printf("请输入正确的月份\n");
        }else
            break;
    }

    
    switch(month){
        case 12:
        case 1:
        case 2:
            printf("%d月是寒冷的冬季\n",month);
            break;
        case 3:
        case 4:
        case 5:
            printf("%d月是生机勃勃的春季\n",month);
            break;
        case 6:
        case 7:
        case 8:
            printf("%d月是炎热的夏季\n",month);
            break;
        case 9:
        case 10:
        case 11:
            printf("%d月是天高云淡的秋季\n",month);
            break;
    }
    
    
    
    return 0;
}
