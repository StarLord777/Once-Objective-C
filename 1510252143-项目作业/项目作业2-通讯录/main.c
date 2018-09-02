#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//常量定义有：存储的条数，人名的长度，电话的长度
#define N 200
#define NameLen 20
#define NumLen 20
//定义联系人结构体
typedef struct{
    int no;
    char name[NameLen];
    char num[NumLen];
} Person;
//联系人数组，里面存放所有联系人信息
Person allSaves[N];
//定义变量，存储当前拥有的联系人个数并初始化为0
int countPerson=0;
//定义变量，存储文件路径
char *filepath="telbook.data";

//函数声明------------------------------------------------
void init();//初始化，读取或创建数据库文件并读取
void writeFile();
void PrintMenu();//打印目录
void addPerson(Person allSaves[N]);//1.添加联系人函数
int delPerson(Person allSaves[N]);//2.删除联系人函数
int editPerson(Person allSaves[N]);//3.修改联系人函数
void seeAllPerson(Person allSaves[N]);//4.查看所有联系人函数
void serchPerson(Person allSaves[N]);//5.搜索联系人
void NoSerch(Person allSaves[N]);
void NameSerch(Person allSaves[N]);
void NumSerch(Person allSaves[N]);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    init();
    int n;//存储要执行的操作
    while (1) {
        system("clear");
        PrintMenu();
        printf("请选择功能:");
        scanf("%d",&n);
        if (n<1||n>6) {
            printf("请输入正确的选项\n");
            continue;
        }
        switch (n) {
            case 1:addPerson(allSaves);break;
            case 2:delPerson(allSaves);break;
            case 3:editPerson(allSaves);break;
            case 4:seeAllPerson(allSaves);break;
            case 5:serchPerson(allSaves);break;
            case 6:printf("正在退出...\n");return 0;break;
            default:
                break;
        }
    }
    return 0;
}

//打印目录---------------------------------------------
void PrintMenu(){
    printf("******************************\n");
    printf("***** 欢迎使用多功能通讯录 ******\n");
    printf("*****    1.添加联系人    ******\n");
    printf("*****    2.删除联系人    ******\n");
    printf("*****    3.修改联系人    ******\n");
    printf("*****    4.查看所有联系人 ******\n");
    printf("*****    5.搜索联系人    ******\n");
    printf("*****    6.退出         ******\n");
    printf("*****************************\n");
}
//1.添加联系人函数-------------1------------------------
void addPerson(Person allSaves[N]){
    Person p1;
    printf("请输入要添加的联系人姓名：\n");
    scanf("%s",&p1.name);
    printf("请输入要添加的联系人电话：\n");
    scanf("%s",&p1.num);
    p1.no=countPerson+1;
    //加入到联系人数组
    allSaves[countPerson]=p1;
    countPerson++;
    
    //写入到数据库文件
    FILE *fp=fopen(filepath, "wb");
    fwrite(&countPerson, sizeof(countPerson), 1, fp);
    printf("%d\n",countPerson);
    for (int i=0; i<countPerson; i++) {
        fread(&allSaves[i], sizeof(Person), 1, fp);
    }
    
    
    writeFile();
    
    printf("成功添加联系人!\n");
}
//2.删除联系人函数-------------2-------------------------
int delPerson(Person allSaves[N]){
    int no;//要删除的联系人编号
    printf("请输入要删除的联系人的编号:\n");
    scanf("%d",&no);
    //判断该编号是否合法
    if (no>countPerson) {
        printf("该编号不存在\n");
        return 0;
    }
    //提示原纪录情况
    printf("NO.     Name    Number\n");
    printf("--------------------------\n");
    printf("%-5d\t%-5s\t%-5s\n",allSaves[no-1].no,allSaves[no-1].name,allSaves[no-1].num);
    //确认是否删除
    int flag=1;
    printf("请确认是否删除,确定1，取消2\n");
    scanf("%d",&flag);
    if (flag==2) {
        return 0;
    }
    //进行移位操作，将该编号删除，并将后面的信息提到前面，覆盖该条信息；
    for (int i=no-1; i<countPerson; i++) {
        allSaves[i]=allSaves[i+1];
        allSaves[i].no=i+1;
    }
    //将最后一条信息删除
    allSaves[countPerson-1]=allSaves[countPerson];
    countPerson--;
    
    writeFile();
    return 0;
}
//3.修改联系人函数---------------3-----------------------
int editPerson(Person allSaves[N]){
    int no;//保存要修改的编号；
    printf("请输入要修改的编号\n");
    scanf("%d",&no);
    //判断编号是否合法
    if (no<1||no>countPerson) {
        printf("要修改的记录不存在\n");
        return 0;
    }
    //显示未修改前的信息方便用户看着修改
    printf("NO.     Name    Number\n");
    printf("--------------------------\n");
    printf("%-5d\t%-5s\t%-5s\n",allSaves[no-1].no,allSaves[no-1].name,allSaves[no-1].num);
    int id;//要修改姓名还是电话，姓名1，电话2；
    char name[NameLen];
    char num[NumLen];
    int flag=1;//判断是否合法修改，是否跳出循环
    while (flag) {
        printf("请输入要修改的值：Name1，Number2，All3\n");
        scanf("%d",&id);
        if (id>3||id<1) {
            printf("请输入正确的选项\n");
            continue;
        }
        switch (id) {
            case 1:{
                printf("请输入Name\n");
                scanf("%s",&allSaves[no-1].name);
                printf("修改成功\n");
                printf("NO.     Name    Number\n");
                printf("--------------------------\n");
                printf("%-5d\t%-5s\t%-5s\n",allSaves[no-1].no,allSaves[no-1].name,allSaves[no-1].num);
                //allSaves[no-1].name=name;
                flag=0;
            }break;
            case 2:{
                printf("请输入Number\n");
                scanf("%s",&allSaves[no-1].num);
                printf("修改成功\n");
                printf("NO.     Name    Number\n");
                printf("--------------------------\n");
                printf("%-5d\t%-5s\t%-5s\n",allSaves[no-1].no,allSaves[no-1].name,allSaves[no-1].num);
                //allSaves[no-1].name=name;
                flag=0;
            }break;
            case 3:{
                printf("请输入Name\n");
                scanf("%s",&allSaves[no-1].name);
                printf("请输入Number\n");
                scanf("%s",&allSaves[no-1].num);
                printf("修改成功\n");
                printf("NO.     Name    Number\n");
                printf("--------------------------\n");
                printf("%-5d\t%-5s\t%-5s\n",allSaves[no-1].no,allSaves[no-1].name,allSaves[no-1].num);
                flag=0;
            }break;
        }
    }
    
    writeFile();
    return 0;
}
//4.查看所有联系人函数-------------4-------------------------
void seeAllPerson(Person allSaves[N]){
    printf("NO.     Name    Number\n");
    printf("--------------------------\n");
    for (int i=0; i<countPerson; i++) {
        printf("%-5d\t%-5s\t%-5s\n",allSaves[i].no,allSaves[i].name,allSaves[i].num);
    }
}
//5.搜索联系人------------------------------------------
void serchPerson(Person allSaves[N]){
    //首先确定搜索的方式，按序号搜索1，按名字搜索2，按电话搜索3；
    int fang;//保存搜索方式
    printf("请选择搜索方式,No.搜索-1,Name搜索-2,Number搜索-3\n");
    scanf("%d",&fang);
    if (fang<1||fang>3) {
        printf("请输入正确的搜索方式\n");
        serchPerson(allSaves);
    }
    switch (fang) {
        case 1:NoSerch(allSaves);break;
        case 2:NameSerch(allSaves);break;
        case 3:NumSerch(allSaves);break;
    }
}
//搜索用到的小函数----------------------------------------
//按照序号搜索
void NoSerch(Person allSaves[N]){
    int no;
    printf("请输入要查找的序号:\n");
    scanf("%d",&no);
    if (no>countPerson||no<1) {
        printf("抱歉，不存在该记录，请重新输入\n");
        NoSerch(allSaves);
    }
    printf("NO.     Name    Number\n");
    printf("--------------------------\n");
    printf("%-5d\t%-5s\t%-5s\n",allSaves[no-1].no,allSaves[no-1].name,allSaves[no-1].num);
}
//按照名字搜索
void NameSerch(Person allSaves[N]){
    char name1[NameLen];
    printf("请输入要查找的Name:");
    scanf("%s",name1);
    //gets(name1);
    Person p1;
    for (int i=0; i<countPerson; i++) {
        if (strcmp(name1, allSaves[i].name)==0) {
            //allSaves[i].name==name1
            //判断时，name1为创建的字符串的首地址，
            //判断时，if都把他们当成地址看了，
            
            p1=allSaves[i];
        }
    }
    printf("NO.     Name    Number\n");
    printf("--------------------------\n");
    printf("%-5d\t%-5s\t%-5s\n",p1.no,p1.name,p1.num);
    
}
//按照电话搜索
void NumSerch(Person allSaves[N]){
    char Num[NumLen];
    printf("请输入要查找的Num:");
    scanf("%s",Num);
    //gets(name1);
    Person p1;
    for (int i=0; i<countPerson; i++) {
        if (strcmp(Num, allSaves[i].num)==0) {
            //allSaves[i].name==name1
            //判断时，name1为创建的字符串的首地址，
            //判断时，if都把他们当成地址看了，
            
            p1=allSaves[i];
        }
    }
    printf("NO.     Name    Number\n");
    printf("--------------------------\n");
    printf("%-5d\t%-5s\t%-5s\n",p1.no,p1.name,p1.num);
    
}


//初始化
//打开二进制数据库文件，并读取联系人个数，如果没有则创建，并写入联系人个数
void init(){
    //尝试打开数据库文件
    FILE *fp=fopen(filepath, "r");
    if (fp!=NULL) {
        //如果文件存在，就读取联系人个数，读取全部的联系人信息
        fread(&countPerson, sizeof(countPerson), 1, fp);
        for (int i=0; i<countPerson; i++) {
            fread(&allSaves[i], sizeof(Person), 1, fp);
        }
        printf("数据库调入成功\n");
    }else{
        fp=fopen(filepath, "wb");
        fwrite(&countPerson, sizeof(countPerson), 1, fp);
        printf("数据库文件创建成功\n");
    }
    fclose(fp);
}
void writeFile(){
    FILE *fp = fopen(filepath,"wb");
    
    if(fp!=NULL){
		      fwrite(&countPerson,sizeof(countPerson),1,fp);
        
        for(int i=0;i<countPerson;i++){
            
            fwrite(&allSaves[i],sizeof(Person),1,fp);
        }
        
        printf("数据更新成功！\n");
        
    }
    
    fclose(fp);
    
}





