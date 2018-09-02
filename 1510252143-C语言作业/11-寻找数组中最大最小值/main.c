#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    //用户指定数组的大小
    int N;
    printf("请输入数组的大小:\n");
    scanf("%d",&N);
    //随机为数组元素赋值
    int a[100];
    for (int i=0; i<N; i++) {
        a[i]=arc4random_uniform(1000);
    }
    
    //打印数组----------------------------
    for (int i=0; i<N; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    //寻找最大最小值-----------------------
    int max=a[0],min=a[0];
    for(int i=0;i<N;i++){
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("max=%d,min=%d\n",max,min);
    
    
    
    return 0;
}
