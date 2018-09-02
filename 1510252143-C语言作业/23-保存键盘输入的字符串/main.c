#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char ch;
    int count;
    
    FILE *fp=fopen("string.txt", "w+");
    //接收字符
    printf("请输入字符串\n");
    ch=getchar();
    while (ch!='\n') {
        count++;
        fputc(ch, fp);//依次写入文件
        ch=getchar();
    }
    printf("您一共输入了%d个字符\n",count);
    
    //读取文件并显示
    //
    rewind(fp);//把文件指针重新指向开头
    ch=fgetc(fp);
    while (ch!=EOF) {
        putchar(ch);
        ch=fgetc(fp);
    }
    
    printf("\n");
    
    fclose(fp);
    
    
    return 0;
}
