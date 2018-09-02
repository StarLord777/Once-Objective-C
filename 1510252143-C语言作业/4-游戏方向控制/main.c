#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char ch;
    printf("请输入方向：w(上).s(下).a(左).d(右)--q(退出)\n");
    while(ch!='q'){
        scanf("%c",&ch);
        if(ch!='w'&&ch!='a'&&ch!='s'&&ch!='d'&&ch!='q'&&ch!='\n'){
            printf("输入错误，请重新输入!\n");
        }
        switch(ch){
            case 'w':printf("上\n");break;
            case 's':printf("下\n");break;
            case 'a':printf("左\n");break;
            case 'd':printf("右\n");break;
            case 'q':printf("程序正在退出...\n");return 0;break;
        }
    }
    
    
    
    return 0;
}
