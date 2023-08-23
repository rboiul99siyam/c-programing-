#include<stdio.h>
int main(){
   int a,s,k;
   scanf("%d",&a); 
   s = a-1;
   k =1;
   for(int i=0;i<a;i++){
    for(int j=0;j<s;j++)
    {
        printf(" ");
    }
    for(int j=0;j<k;j++)
    {
       if(i%2==0){
           printf("*");
       }else{
        printf("^");
       }
    }
    printf("\n");
    k+=2;
    s--;
   }
    return 0;
}