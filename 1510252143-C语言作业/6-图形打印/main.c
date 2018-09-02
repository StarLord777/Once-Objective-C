#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //正方形--------------------------
    printf("正方形\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    //长方形--------------------------
    printf("长方形\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<8;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    //正直角三角形---------------------------
    printf("正直角三角形\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    //倒直角三角形---------------------------
    printf("倒直角三角形\n");
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    //正三角形
    printf("正三角形\n");
    for(int i=0;i<6;i++){
        for(int j=5-i;j>0;j--){
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++)
            printf("*");
        printf("\n");
        
    }
    
    
    
    
    return 0;
}
