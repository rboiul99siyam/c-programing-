#include<stdio.h>
int main(){
   int a = 44;
   int * ptr = &a;
   printf("a er momery address - %p\n",&a); 
   printf("ptr er momery value  - %p\n",ptr); 
   printf("ptr er momery address  - %p\n",&ptr);
   *ptr = 500;
   printf("a er value derefarence kora holo ptr er moddde  - %d",*ptr); 
   
   
    return 0;
}