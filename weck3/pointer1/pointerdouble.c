#include<stdio.h>
int main(){
   double a = 5.26;
//    printf("%p\n",a);
   double * ptr = &a;
   printf("ptr er value  - %0.2lf\n",*ptr);
   *ptr = 10.25;
   printf("ptr er derefance value : %0.2lf",*ptr);
   printf("ptr er derefance value : %0.2lf",a);
    
   
    return 0;
}