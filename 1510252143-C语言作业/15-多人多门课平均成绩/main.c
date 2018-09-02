#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int cj[5][3]={
        {80,85,92},
        {61,75,81},
        {59,63,79},
        {87,69,99},
        {75,79,83}
    };
    
    for(int i=0;i<5;i++){
        float avg=0;
        for(int j=0;j<3;j++){
            avg+=cj[i][j];
        }
        printf("第%d位学生的三门课平均成绩是%f\n",i+1,avg/3);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        float avg=0;
        for(int j=0;j<5;j++){
            avg+=cj[j][i];
        }
        printf("第%d门课的平均成绩是%f\n",i+1,avg/5);
    }
    printf("\n");
    float total;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            total+=cj[i][j];
        }
    } 
    printf("三门课的平均成绩是%f\n",total/15);
    
    
    
    
    return 0;
}
