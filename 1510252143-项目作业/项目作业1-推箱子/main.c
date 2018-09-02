#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define ROW 10//行
#define COL 11//列

char map[ROW][COL] = {
    "##########",//0
    "###     ##",//1
    "###     ##",//2
    "##AX  # ##",//3
    "###  ##   ",//4
    "#####    #",//5
    "##       #",//6
    "#     ####",//7
    "###       ",//8
    "##########" //9
    //A:人  ， X：箱子
    
} ;
//当前小人的坐标
int currentPersonRow = 3;
int currentPersonCol = 2;
//当前箱子的坐标
int currentBoxRow = 3;
int currentBoxCol = 3;
//-------------------函数声明--------------------
//打印地图
void PrintMap();
//接收小人的方向
char enterDirection();
//小人向上移动的方法
void moveUp();
//小人向下移动的方法
void moveDown();
//小人向右移动的方法
void moveRight();
//小人向左移动的方法
void moveLeft();
//-------------------主函数------------------------
int main(int argc, const char * argv[]) {
    while (1) {
        system("clear");
        PrintMap();
        char direction=enterDirection();
        switch(direction){
            case 'w':
            case 'W':
                moveUp();
                break;
            case 's':
            case 'S':
                moveDown();
                break;
            case 'd':
            case 'D':
                moveRight();
                break;
            case 'a':
            case 'A':
                moveLeft();
                break;
            case 'q':
            case 'Q':  
                printf("正在退出...\n");
                exit(0);
                break;  
        }
        if (currentBoxRow==8&&currentBoxCol==9) {
            printf("YOU WIN !\n");
            exit(0);
        }
    }
    
    
    
    
    return 0;
}

//------------------函数体---------------------
void PrintMap(){
    int i;
    for(i = 0;i < ROW; i++){
        printf("%s\n",map[i]);
    }
    printf("\n");
    printf("W:上，S：下， A：左， D：右。Q：退出\n");
}



//接收小人的方向
char enterDirection(){
    char dir;
    dir = getchar();
    //scanf("%c",&dir);
    return dir;
}
//小人向上移动的方法
void moveUp(){
    //小人的下一个坐标
    int nextPersonCol = currentPersonCol;
    int nextPersonRow = currentPersonRow - 1;
    //箱子的下一个坐标
    int nextBoxRow = currentBoxRow - 1;
    int nextBoxCol = currentBoxCol;
    
    //如果小人的下一个坐标是路
    if(map[nextPersonRow][nextPersonCol]==' '){
        map[nextPersonRow][nextPersonCol] = 'A';
        map[currentPersonRow][currentPersonCol] = ' ';
        currentPersonRow = nextPersonRow;
        currentPersonCol = nextPersonCol;
    }
    //如果小人的下一个坐标是墙
    if(map[nextPersonRow][nextPersonCol]=='#'){
        //什么也不做
    }
    //如果小人的下一个坐标是箱子
    if(map[nextPersonRow][nextPersonCol]=='X'){
        if(map[nextBoxRow][nextBoxCol] == ' '){
            
            map[nextPersonRow][nextPersonCol] = 'A';
            map[currentPersonRow][currentPersonCol] = ' ';
            
            map[nextBoxRow][nextBoxCol] = 'X';
            map[currentBoxRow][currentBoxCol] = 'A';
            
            
            currentPersonRow = nextPersonRow;
            currentPersonCol = nextPersonCol;
            currentBoxRow = nextBoxRow;
            currentBoxCol = nextBoxCol;
        }
    }
}
//小人向下移动的方法
void moveDown(){
    //小人的下一个坐标
    int nextPersonCol = currentPersonCol;
    int nextPersonRow = currentPersonRow + 1;
    //箱子的下一个坐标
    int nextBoxRow = currentBoxRow + 1;
    int nextBoxCol = currentBoxCol;
    
    //如果小人的下一个坐标是路
    if(map[nextPersonRow][nextPersonCol]==' '){
        map[nextPersonRow][nextPersonCol] = 'A';
        map[currentPersonRow][currentPersonCol] = ' ';
        currentPersonRow = nextPersonRow;
        currentPersonCol = nextPersonCol;
    }
    //如果小人的下一个坐标是墙
    if(map[nextPersonRow][nextPersonCol]=='#'){
        //什么也不做
    }
    //如果小人的下一个坐标是箱子
    if(map[nextPersonRow][nextPersonCol]=='X'){
        if(map[nextBoxRow][nextBoxCol] == ' '){
            
            map[nextPersonRow][nextPersonCol] = 'A';
            map[currentPersonRow][currentPersonCol] = ' ';
            
            map[nextBoxRow][nextBoxCol] = 'X';
            map[currentBoxRow][currentBoxCol] = 'A';
            
            currentPersonRow = nextPersonRow;
            currentPersonCol = nextPersonCol;
            currentBoxRow = nextBoxRow;
            currentBoxCol = nextBoxCol;
        }
    }
}
//小人向右移动的方法
void moveRight(){
    //小人的下一个坐标
    int nextPersonCol = currentPersonCol + 1;
    int nextPersonRow = currentPersonRow;
    //箱子的下一个坐标
    int nextBoxRow = currentBoxRow;
    int nextBoxCol = currentBoxCol + 1;
    
    //如果小人的下一个坐标是路
    if(map[nextPersonRow][nextPersonCol]==' '){
        map[nextPersonRow][nextPersonCol] = 'A';
        map[currentPersonRow][currentPersonCol] = ' ';
        currentPersonRow = nextPersonRow;
        currentPersonCol = nextPersonCol;
    }
    //如果小人的下一个坐标是墙
    if(map[nextPersonRow][nextPersonCol]=='#'){
        //什么也不做
    }
    //如果小人的下一个坐标是箱子
    if(map[nextPersonRow][nextPersonCol]=='X'){
        if(map[nextBoxRow][nextBoxCol]==' '){
            
            map[nextPersonRow][nextPersonCol] = 'A';
            map[currentPersonRow][currentPersonCol] = ' ';
            
            map[nextBoxRow][nextBoxCol] = 'X';
            map[currentBoxRow][currentBoxCol] = 'A';
            
            currentPersonRow = nextPersonRow;
            currentPersonCol = nextPersonCol;
            currentBoxRow = nextBoxRow;
            currentBoxCol = nextBoxCol;
        }
    }
}
//小人向左移动的方法
void moveLeft(){
    //小人的下一个坐标
    int nextPersonCol = currentPersonCol - 1;
    int nextPersonRow = currentPersonRow;
    //箱子的下一个坐标
    int nextBoxRow = currentBoxRow;
    int nextBoxCol = currentBoxCol - 1;
    
    //如果小人的下一个坐标是路
    if(map[nextPersonRow][nextPersonCol]==' '){
        map[nextPersonRow][nextPersonCol] = 'A';
        map[currentPersonRow][currentPersonCol] = ' ';
        currentPersonRow = nextPersonRow;
        currentPersonCol = nextPersonCol;
    }
    //如果小人的下一个坐标是墙
    if(map[nextPersonRow][nextPersonCol]=='#'){
        //什么也不做
    }
    //如果小人的下一个坐标是箱子
    if(map[nextPersonRow][nextPersonCol]=='X'){
        if(map[nextBoxRow][nextBoxCol]==' '){
            map[nextPersonRow][nextPersonCol] = 'A';
            map[currentPersonRow][currentPersonCol] = ' ';
            
            map[nextBoxRow][nextBoxCol] = 'X';
            map[currentBoxRow][currentBoxCol] = 'A';
            
            currentPersonRow = nextPersonRow;  
            currentPersonCol = nextPersonCol;  
            currentBoxRow = nextBoxRow;  
            currentBoxCol = nextBoxCol;  
        }  
    }  
}


























