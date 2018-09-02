#include <stdio.h>
void change(int *a,int *b);
int main(int argc, const char * argv[]) {
    // insert code here...
    
    //定义两个变量
    int a,b;
    printf("请输入a,b的值\n");
    scanf("%d",&a);
    scanf("%d",&b);
    change(&a, &b);
    
    printf("交换后的值是a:%d--b:%d\n",a,b);

    
    return 0;
}

void change(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
