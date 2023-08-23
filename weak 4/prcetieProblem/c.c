//submit done
#include<stdio.h>
void fun(int x){
    
    if(x ==0) return;
 if(x==1)
{
    printf("%d",x);
}
else{
    printf("%d ",x);
}
fun(x-1);
}
int main(){
    int a;
    scanf("%d",&a);
    fun( a);
    
    return 0;
}
