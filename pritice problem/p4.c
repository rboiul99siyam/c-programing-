#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   printf("Read and print element an array:\n");
   printf("--------------------------------------------\n");
   printf("input a  element in the array :\n");
   int ar[a];
   for(int i = 0; i < a; i++)
   {
     scanf("%d",&ar[i]);
   }
   for(int i = 0; i < a; i++)
   {
     printf(" elemet %d - %d \n",i,ar[i]);
   }
   

    return 0;
}