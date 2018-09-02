#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    char ch[100];
    printf("请输入一句英文，我将统计单词个数，并把每个单词首字母大写\n");
    gets(ch);
    
    
    //统计单词个数原理：！！空格的下一个一定是单词
    int flag=0;
    int i=0;
    int count=0;//统计单词个数
    while (ch[i]!='\0') {
        if (ch[i]==' ') {
            flag=0;
        }else if (flag==0){
            flag=1;
            count++;
            ch[i]=ch[i]-32;
        }
        i++;
    }
    printf("%s\n",ch);
    printf("共有%d个单词\n",count);
    
    
    return 0;
}
