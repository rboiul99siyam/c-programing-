#include<stdio.h>
int fun(int a){
    for(int i=1;i<=a;i++){
        printf("%d ",i);
    }
}
int main(){
   int a;
   scanf("%d",&a);
   fun(a); 
    return 0;
}