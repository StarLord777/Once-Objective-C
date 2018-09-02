#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a,b;
    printf("请输入a,b的值\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("相加法交换\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d\n",a,b);
    //“‡ªÚ
    printf("异或交换\n");
    a=a^b;
    b=a^b;
    a=a^b;
    
    printf("a=%d,b=%d\n",a,b);
    
    
    
    
    return 0;
}
