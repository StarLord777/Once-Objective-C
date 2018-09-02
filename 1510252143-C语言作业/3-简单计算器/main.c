#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //定义用户输入的两个数，一个符号,运算结果
    int num1,num2;
    int op;
    float result;
    
    printf("请输入第一个数:\n");
    scanf("%d",&num1);
    while (1) {
        printf("请输入要进行的运算：+.1,-.2,*.3,/.4\n");
        scanf("%d",&op);
        if (op<1||op>4) {
            printf("运算符输入错误，请按照提示输入\n");
        }else
            break;
    }
    while (1) {
        printf("请输入第二个数:\n");
        scanf("%d",&num2);
        if (op==4&&num2==0) {
            printf("输入无效，进行除法除数不能为0\n");
        }else
            break;
    }
    
    switch (op) {
        case 1:
            result=num1+num2;
            break;
        case 2:
            result=num1-num2;
            break;
        case 3:
            result=num1*num2;
            break;
        case 4:
            result=num1/(float)num2;
            
        default:
            break;
    }
    
    printf("运算结果是%f\n",result);
    
    return 0;
}
