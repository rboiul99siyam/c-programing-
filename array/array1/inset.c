#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int ar[a+1];
   for(int i=0;i<a;i++) 
   {
     scanf("%d",&ar[i]);
   }
   int pos,value;
   scanf("%d%d",&pos,&value);
   for(int i=a;i>=pos+1;i--){
    ar[i] = ar[i-1];
   }
   ar[pos]=value;
   for(int i=0;i<a+1;i++){
    printf("%d ",ar[i]);
   }

    return 0;
}