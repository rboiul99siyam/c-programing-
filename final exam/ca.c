#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++){
    scanf("%d",&ar[i]);
   } 
   int coun[10] ={0};
   for(int i=0;i<a;i++){
    int value = ar[i];
    coun[value]++;
   }
   for(int i=0;i<a;i++){
    printf("%d-%d\n",i,coun[i]);
   }
    return 0;
}