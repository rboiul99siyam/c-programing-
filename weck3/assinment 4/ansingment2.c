#include<stdio.h>
int main(){
   int a,s,k;
   scanf("%d",&a);
   s = a -1;
   k = 0;

   for(int i=1;i<=a;i++){
    for(int j=0;j<=s;j++){
        printf(" ");
    }
    for(int j=0;j<=k;j++){
        printf("%d",i);
    }
    k++;
    s--;
    printf("\n");
   }
    return 0;
}