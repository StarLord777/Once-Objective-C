#include <stdio.h>

enum sexEnum{boy,girl};
struct Birth{
    int year;
    int mon;
    int day;
};
struct Student{
    int id;//学号
    char name[20];//姓名
    enum sexEnum sex2;
    struct Birth birth;
};

int main(int argc, const char * argv[]) {
    
    struct Student stu[2];
    //从键盘接收学生数据
    for (int i=0; i<2; i++) {
        printf("请输入学生的学号\n");
        scanf("%d",&stu[i].id);
        printf("请输入学生姓名\n");
        scanf("%s",&stu[i].name);
        printf("请输入学生性别：boy(0),girl(1)\n");
        scanf("%d",&stu[i].sex2);
        printf("请输入学生的生日，年月日分别回车隔断\n");
        scanf("%d",&stu[i].birth.year);
        scanf("%d",&stu[i].birth.mon);
        scanf("%d",&stu[i].birth.day);
    }
    
    FILE *fp=fopen("jiegouti.data", "wb+");//wb+方式，写二进制并读取
    if (fp!=NULL) {
        
        //写文件
        for (int i=0; i<2; i++) {
            fwrite(&stu[i], sizeof(struct Student), 1, fp);
        }
        printf("写入成功\n");
        
        //将文件指针拉到头
        rewind(fp);
        //读取
        struct Student stu2[2];
        for (int i=0; i<2; i++) {
            fread(&stu2[i], sizeof(struct Student), 1, fp);
            printf("%d,%s,%d,%d-%d-%d\n",stu2[i].id,stu2[i].name,stu2[i].sex2,stu2[i].birth.year,
                   stu2[i].birth.mon
                   ,stu2[i].birth.day);
        }
        
        
    }
    fclose(fp);
    
    
    
    return 0;
}
