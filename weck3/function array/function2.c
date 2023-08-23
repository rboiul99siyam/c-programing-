#include<stdio.h>
int get_sum (int a,int b){

    int get_sum = a+b;
    return get_sum;
}
int main(){
     
    int a,b;
    scanf("%d%d",&a,&b);

    printf("%d",get_sum(a,b));

    return 0;
}