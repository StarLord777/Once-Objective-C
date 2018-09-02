#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//定义地图
#define row 10
#define col 10
char map[row][col]={
    "##########",
    "0 ## ## ##",
    "#     # ##",
    "# # #   ##",
    "# #  # ###",
    "## # #   #",
    "##   ## ##",
    "## # ## ##",
    "#  ####   ",
    "##########"
};
void printMap(char map[10][10]);

//

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    //定义小人当前的位置
    int playx=1,playy=0;
    //定义小人下一个位置
    int nextx=playx,nexty=playy;
    //用户输入
    char x;
    //墙壁
    char street=' ';
    //用于交换的变量
    char temp;
    
    while (1) {
        printMap(map);
        printf("w(上),a(左),s(下),d(右),q(退出),右下角为出口\n");
        scanf("%c",&x);
        getchar();
        switch (x) {
            case 'W':
            case 'w':printf("上\n");
                if (map[playx-1][playy]==street) {
                    nextx=playx-1;
                    //交换------------------
                    temp=map[playx][playy];
                    map[playx][playy]=map[nextx][nexty];
                    map[nextx][nexty]=temp;
                    //----------------------
                    playx=nextx;
                }
                break;
            case 'A':
            case 'a':printf("左\n");
                if (map[playx][playy-1]==street) {
                    nexty=playy-1;
                    //交换------------------
                    temp=map[playx][playy];
                    map[playx][playy]=map[nextx][nexty];
                    map[nextx][nexty]=temp;
                    //----------------------
                    playy=nexty;
                }
                break;
            case 'S':
            case 's':printf("下\n");
                if (map[playx+1][playy]==street) {
                    nextx=playx+1;
                    //交换------------------
                    temp=map[playx][playy];
                    map[playx][playy]=map[nextx][nexty];
                    map[nextx][nexty]=temp;
                    //----------------------
                    playx=nextx;
                }
                break;
            case 'D':
            case 'd':printf("右\n");
                if (map[playx][playy+1]==street) {
                    nexty=playy+1;
                    //交换------------------
                    temp=map[playx][playy];
                    map[playx][playy]=map[nextx][nexty];
                    map[nextx][nexty]=temp;
                    //----------------------
                    playy=nexty;
                }
                break;
            case 'q':printf("正在退出...");exit(0);break;
        }
        if (playy==9) {
            printf("YOU WIN !\n");
            exit(0);
        }
    }
    
    return 0;
}


//打印地图函数
void printMap(char map[10][10]){
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            printf("%c ",map[i][j]);
        }
        printf("\n");
    }
}
