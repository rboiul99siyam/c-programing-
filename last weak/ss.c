#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int ar[a][a];
   for(int i = 0; i < a; i++)
   {
     for(int j = 0; j < a; j++)
     {
        scanf("%d",&ar[i][j]);
     }
   } 
   int flag = 1;
   for(int i = 0;i < a; i++)
   {
    for(int j = 0; j < a; j++)
    {
       if(i==j){
        if(ar[i][j] != ar[0][0]){
            flag=0;
        }
        continue;
        if(ar[i][j] !=0){
            flag=0;
        }
       }
    }
   }
   if(flag==1)
   {
    printf("scaler\n");
   }else{
    printf("no");
   }
    return 0;
}