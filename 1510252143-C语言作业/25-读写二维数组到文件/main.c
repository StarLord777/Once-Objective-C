#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a[3][2]={0,1,2,3,4,5};
    
    FILE *fp=fopen("25arr.txt", "w+");
    if (fp!=NULL) {
        
        //写入文件
        for (int i=0; i<3; i++) {
            fprintf(fp, "%d,%d#", a[i][0],a[i][1]);
        }
        printf("写入成功\n");
        
        //fp指针重新指向开头
        rewind(fp);
        //读取
        int a2[3][2];
        for (int i=0; i<3; i++) {
            fscanf(fp,"%d,%d#",&a2[i][0],&a2[i][1]);
        }
        //显示出来
        printf("读取数据\n");
        for (int i=0; i<3; i++) {
            for (int j=0; j<2; j++) {
                printf("%d\t",a2[i][j]);
            }
            printf("\n");
        }
    }
    
    
    fclose(fp);
    
    
    
    
    return 0;
}
