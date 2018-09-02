#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    
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
    //-------------------------------------------------
    //选择排序
    //每次选择最小的排在前面；
    for (int i=0; i<10; i++) {
        int small=a[i];//记录最小值
        int n;//记录最小值的位置；
        for (int j=i+1; j<10; j++) {
            if (a[j]<small) {
                small=a[j];
                n=j;
            }
        }
        //每一趟将本次开头与后面最小的进行交换
        if (n!=i) {
            int temp;
            temp=a[i];
            a[i]=a[n];
            a[n]=temp;
        }
    }
    //
    printf("排序后数组\n");
    for (int i=0; i<10; i++) {
        printf("%d\t",a[i]);
    }
    
    
    return 0;
}
