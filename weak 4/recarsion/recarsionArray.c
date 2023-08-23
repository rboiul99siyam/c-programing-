#include<stdio.h>

void fun(int ar[],int size,int i){
    if(i==size) return;
    printf("%d  ",ar[i]);
    fun(ar,size,i+1);
}
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++){
    scanf("%d",&ar[i]);
   } 
   fun(ar,a,0);
    return 0;
}