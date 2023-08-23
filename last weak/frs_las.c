#include<stdio.h>
int fun(int a){
    int frst = a/1000;
    int last = a%10;
    int sum = frst+last;
    return sum;
}
int main(){
   int a;
   scanf("%d",&a);
   int sa = fun(a); 
   printf("%d",sa);
    return 0;
}