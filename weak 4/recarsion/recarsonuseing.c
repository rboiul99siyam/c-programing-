#include<stdio.h>
void fun(int x){
    if(x == 100) return;
 printf("%d \n",x);
 fun(x+2);
}
int main(){
    fun(2);
    return 0;
}