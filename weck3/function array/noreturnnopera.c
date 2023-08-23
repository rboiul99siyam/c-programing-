#include<stdio.h>
void get_sum(void){
    int a,b;
    scanf("%d%d",&a,&b);
    int s = a+b;
    printf("MY sum result : %d",s);
}
int main(){
     get_sum();
     get_sum();
    return 0;
}