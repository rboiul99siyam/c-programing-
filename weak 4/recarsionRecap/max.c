#include<stdio.h>
#include<limits.h>
int fun(int ar[],int n,int i){
    if(n==i){
        return INT_MIN;
    }
    int max = fun(ar,n,i+1);
    if(ar[i]>max){
        return ar[i];
    }else{
        return max;
    }
}
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++)
   {
    scanf("%d",&ar[i]);
   } 

   int mx = fun(ar,a,0);
   printf("%d",mx);
    return 0;
}