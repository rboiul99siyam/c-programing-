#include<stdio.h>
int main(){
  int test;
  scanf("%d",&test);
  for(int i=0;i<test;i++)
  {
     int a,b;
   scanf("%d%d",&a,&b);
   int sum = 0;
    sum = a+b;
   printf("%d",sum); 
   printf("\n");
  }
    return 0;
}