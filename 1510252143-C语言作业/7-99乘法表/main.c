#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    for(int i=1;i<10;i++){
        for(int j=1;j<=i;j++){
            printf("%d*%d=%d\t",j,i,i*j);
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}
