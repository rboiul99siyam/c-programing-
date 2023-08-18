#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++){
    scanf("%d",&ar[i]);
   } 

   int even=0,odd=0,three_five=0;
   for(int i=0;i<a;i++)
   {
    if(ar[i]%2==0){
        even++;
    }
    else if(ar[i]%3==0 && ar[i]%5==0){
        three_five++;
    }
    else{
        odd++;
    }
   }
   printf(" even namber %d\n",even);
   printf("odd namber %d\n",odd);
   printf("three five divaialbe %d\n",three_five);
    return 0;
}