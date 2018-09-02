#include <stdio.h>

int maxnum(int *p){
    int max=*p;
    for (int i=0; i<10; i++) {
        if (*(p+i)>max) {
            max=*(p+i);
        }
    }
    return max;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a[10]={5,3,25,78,11,90,45,19,1,777};
    
    int max=maxnum(a);
    printf("%d\n",max);
    
    
    return 0;
}
