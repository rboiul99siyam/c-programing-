#include<stdio.h>
int main(){
   int a,s,k;
   scanf("%d",&a);
   k =1;
   s = a-1;
   for(int i=0;i<2*a-1;i++){

    for(int j=1;j<s;j++){
        printf(" ");
    }
    for(int j=1;j<k;j++){
        printf("%d",i);
    }
    if(i<a-1){
        k++;
        s--;
    }else{
        k--;
        s++;
    }
    
    printf("\n");
   } 
    return 0;
}