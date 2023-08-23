#include<stdio.h>
int max(int ar[],int size){
    int max = ar[0];
   for(int i=0;i<size;i++){
     if(ar[i]>max){
        max = ar[i];
    }
}
 printf("%d ",max);
   }
int min(int ar[],int size){
int min = ar[0];
for(int i=0;i<size;i++){
    if(ar[i]<min){
        min =ar[i];
    }
}
printf("%d ",min);
}
int main(){
    int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
   min(ar,a);
   max(ar,a);
    return 0;
}