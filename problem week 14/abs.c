#include<stdio.h>
int myFunction(int x){
  if(x>0){
    printf("%d",x);
  }else if(x<0){
    printf("%d",x*-1);
  }
 return x;
}
int main(){
    int a;
    scanf("%d",&a);
    myFunction(a);
    return 0;
}