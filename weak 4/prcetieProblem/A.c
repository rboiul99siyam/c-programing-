// //submit done
#include<stdio.h>
void fun(int x,int s){
 if( s==x+1)return;
 printf("I love Recursion\n");
  fun(x,s+1);
}
int main(){
  int a;
  scanf("%d",&a);
    fun(a,1);
    return 0;
}
