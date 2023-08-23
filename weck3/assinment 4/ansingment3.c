#include<stdio.h>
int count_before_zero(int ar[],int s){
    int count= 0;
    for(int i=0;i<s;i++){
       if(ar[i]==0){
        break;
       }else{
        count++;
       }
    }
    return count;
}
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++){
    scanf("%d",&ar[i]);
   } 
 int save = count_before_zero(ar,a);
 printf("%d",save);
 
    return 0;
}