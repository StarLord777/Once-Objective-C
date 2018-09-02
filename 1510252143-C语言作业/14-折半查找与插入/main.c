#include <stdio.h>

//
//定义有序数组
int a[]={2,4,6,8,15,20,40,66,77,100};
int l=10;
int search(int arr[],int key);
int insert(int arr[],int key);

int main(int argc, const char * argv[]) {
    for (int i=0; i<l; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    int loc=search(a,50);
    if (loc>-1) {
        printf("找到了！在第%d个位置\n",loc);
    }else{
        printf("没找到，正在插入数据\n");
        int q=insert(a, 50);
        for (int j=0; j<11; j++) {
            printf("%d\t",a[j]);
        }
        printf("\n插入的位置是%d\n",q);
    }
   
    
    return 0;
}

int search(int arr[],int key){
    int low=0,high=l-1;
    int mid;
    while (low<=high) {
        mid=(low+high)/2;
        if (key>arr[mid]) {
            low=mid+1;
        }else if (key<arr[mid]){
            high=mid-1;
        }else
            return mid;
    }
    //查找不到的时候
    return -1;
}

int insert(int arr[],int key){
    int x;
    for (int i=0; i<l; i++) {
        if (a[i]<=key&&key<a[i+1]) {
            x=i+1;
            break;
        }
    }
    for (int j=l;j>x-1; j--) {
        a[j]=a[j-1];
    }
    a[x]=key;
    return x;
}