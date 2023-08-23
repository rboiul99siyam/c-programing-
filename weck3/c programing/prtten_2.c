#include<stdio.h>
int main(){
    int a,s,k;
    scanf("%d",&a);
    s = a-1 ;
    k=1;
    for(int i=1;i<=a;i++){
       
        

       for(int j=0;j<=s;j++){
        printf(" ");
       }

      for(int j=1;j<=k;j++){
        printf("*");
       }

       k=k+2;
       s--;
       printf("\n");

    } 
    return 0;
}