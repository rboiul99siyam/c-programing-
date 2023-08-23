#include<stdio.h>
int main(){
    int x  = 10;
    // printf("%p",&x); 
    int * p = &x;
    //dereferance
    // printf("%d",*p);

    *p = 500;
    printf("%d",x);
    return 0;
}