#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//定义字符串数组
char *arr[];
void sortString(int len);

int main(int argc, const char * argv[]) {
    printf("%d\n",'A');
    printf("请输入需要排序的国名个数\n");
    int n;
    scanf("%d",&n);
    printf("请依次输入各国名\n");
    //为每个字符串申请空间
    for(int i = 0;i < n;i++)
    {
        arr[i] = (char *)malloc(100);
    }
    //输入每个字符串
    for (int i=0; i<n; i++) {
        scanf("%s",&arr[i]);
    }
    //先输出一次
    //排序
    sortString(n);
    //-----------------
    for (int j=0; j<n; j++) {
        printf("%s\t",&arr[j]);
    }
    
    return 0;
}

void sortString(int len){
    char * temp;
    for (int i=0; i<len-1; i++) {
        for (int j=0; j<len-1-i; j++) {
            if (strcmp(&arr[j], &arr[j+1])>0) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    
}