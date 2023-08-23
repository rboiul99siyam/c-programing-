#include<stdio.h>
void fun (int *p){
 *p = 5000;
}
int main(){
   int x = 500; 
   fun(&x);
   printf("%d",x);
    return 0;
}