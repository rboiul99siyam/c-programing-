#include<stdio.h>
void get_sum(void){
    int a,b;
    scanf("%d%d",&a,&b);
    int save = a+b;
    printf("%d",save);
}
int main(){
    get_sum();
    return 0;
}