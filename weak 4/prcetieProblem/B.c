
//submit done
#include<stdio.h>
void fun(int x,int i){
    if(i==x+1) return;
  printf("%d \n",i);
  fun(x,i+1);
}
int main(){
    int a;
    scanf("%d",&a);
    fun( a,1);
    return 0;
}