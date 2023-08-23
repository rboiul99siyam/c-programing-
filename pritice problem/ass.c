#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++)
   {
    scanf("%d",&ar[i]);
   }
   for(int i=0;i<a-1;i++)
   {
    for(int j=i+1;j<a;j++)
    {
        if(ar[i]>ar[j])
        {
            int tmp = ar[i];
            ar[i]  =  ar[j];
            ar[j]  = tmp;
        }
    }
   } 
   if(a%2==0){
    printf("%d %d",ar[(a/2)],ar[(a/2)+1]);
   }else{
    printf("%d",(a+1)/2);
   }
    return 0;
}