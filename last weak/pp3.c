#include<stdio.h>
void fun(int a){
    if(a==0)return;
    if(a==1){
        printf("%d",a);
    }else{
        printf("%d ",a);
    }
    fun(a-1);
}
int main(){
   int a;
   scanf("%d",&a);
   fun(a); 
    return 0;
}