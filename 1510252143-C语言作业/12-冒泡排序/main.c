#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    //创建随机数组
    int a[10];
    for (int i=0; i<10; i++) {
        a[i]=arc4random_uniform(100);
    }
    
    //打印排序前的数组
    printf("排序前数组\n");
    for (int i=0; i<10; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    
    //冒泡排序
    for (int i=0; i<9; i++) {
        for (int j=0; j<9-i; j++) {
            int x;
            if (a[j]>a[j+1]) {
                x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
    
    printf("排序后数组\n");
    for (int i=0; i<10; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
   
    return 0;
}
