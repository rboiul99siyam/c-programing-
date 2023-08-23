#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int ar[a][a];
   int frist;
   for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        scanf("%d",&ar[i][j]);
    }
   } 
   int flag =1;
   frist=ar[0][0];
   for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        if(i==j && ar[i][j] !=frist){
            flag = 0;
            break;
        }
        if(i != j && ar[i][j] != 0){
            flag = 0;
            break;
        }
    }
   }
   if(flag==1){
    printf("YES\n");
   }else{
    printf("NO\n");
   }
    return 0;
}