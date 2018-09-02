#include <stdio.h>
int x_y(int x,int y);
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int x,y;
    int s=1;
    //用递归和非递归
    //非递归
    printf("请输入x,y的值;\n");
    scanf("%d",&x);
    scanf("%d",&y);
    for (int i=0; i<y; i++) {
        s=s*x;
    }
    printf("%d的%d次方是%d\n",x,y,s);
    
    s=x_y(x, y);
    printf("%d的%d次方是%d\n",x,y,s);
   
    return 0;
}
//递归
int x_y(int x,int y){
    if (y==0) {
        return 1;
    }
    return x*x_y(x,y-1);
}