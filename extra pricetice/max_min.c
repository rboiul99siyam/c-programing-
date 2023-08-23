#include<stdio.h>

int min_max(int ar[],int size){
   int max  = ar[0];
   for(int i = 0;i<size;i++){
    if(ar[i]>max){
        max = ar[i];
    }
   }
   printf("maximum value %d\n",max);
   return max;
}
int min_maximum(int ar[],int size){
  int min = ar[0];
  for(int i=0;i<size;i++){
    if(ar[i]<min){
        min = ar[i];
    }
  }
  printf("minimum value %d\n",min);
  return min;
}
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++){
    scanf("%d",&ar[i]);
   } 
   min_max(ar,a);
   min_maximum(ar,a);
    return 0;
}