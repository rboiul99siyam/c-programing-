#include<stdio.h>
int fun(int x){
 for(int i=1;i<=x;i++){
    printf("%d\n",i);
 }
}
int main(){
    int a;
    scanf("%d",&a);
    fun(a);
    return 0;
}