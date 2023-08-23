#include<stdio.h>
#include<limits.h>
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++)
   {
    scanf("%d",&ar[i]);
   } 
  int min = INT_MAX;
  int count =0;
  for(int i=0;i<a;i++){
    if(ar[i]<min){
     min = ar[i];
    }
  }
  for(int i=0;i<a;i++)
  {
    if(ar[i]==min)
    {
        count++;
    }
  }
 if(count%2==0){
    printf("unlucky\n");
 }else{
    printf("lucky\n");
 }
  return 0;
}