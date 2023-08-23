#include<stdio.h>
#include<stdlib.h>
void fun(int a){
  printf("%d",abs(a));
}
int main(){
   int a;
   scanf("%d",&a);
    fun(a);
    return 0;
}