#include <stdio.h>
void digui(int x);
int main(int argc, const char * argv[]) {
    // insert code here...
    //两种方法写将10进制转换为二进制
    //---------
    
    int x;
    printf("请输入要转换的值：\n");
    scanf("%d",&x);
    digui(x);
    printf("\n");
    //非递归
    
    int a[100];
    int j;
    while (1) {
        if (x>=2) {
            a[j]=x%2;
            x=x/2;
            j++;
        }
        if (x<2) {
            a[j]=x%2;
            break;
        }
    }
    for (j;j>=0;j--) {
        printf("%d",a[j]);
    }
    
    
    return 0;
}

void digui(int x){
    if (x/2>0) {
        digui(x/2);
    }
    printf("%d",x%2);
}