#ifndef ___er_h
#define ___er_h


#endif
void digui(int x){
    if (x/2>0) {
        digui(x/2);
    }
    printf("%d",x%2);
}