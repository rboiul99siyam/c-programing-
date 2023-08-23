#include<stdio.h>
int even_odd(int x){
  if(x%2==0){
    return 1;
  }else{
    return 0;
  }
}
int main(){
    int num;
    scanf("%d",&num);
  if(even_odd(num)==1){
    printf("even");
  }else{
    printf("odd");
  }
    return 0;
}