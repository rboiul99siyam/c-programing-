#include<stdio.h>
int add_sum(int a,int b){
    int sum = a+b;
    return sum;
}
int main(){
      int a,b;
    scanf("%d%d",&a,&b);
    int save = add_sum(a,b);
    printf("%d",save);
    return 0;
}