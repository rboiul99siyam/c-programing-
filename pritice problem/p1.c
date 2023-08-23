#include<stdio.h>
int main(){
   int a,b,sum=0,div =0,mul=0;
   float sub=0;
   scanf("%d%d",&a,&b);
    sum = a + b;
    div = a - b;
    mul = a * b;
    sub = a / b;
   printf("%d + %d = %d\n",a,b,sum);
   printf("%d - %d = %d\n",a,b,div);
   printf("%d * %d = %d\n",a,b,mul);
   printf("%d / %d = %0.2f\n",a,b,sub);
    return 0;
}