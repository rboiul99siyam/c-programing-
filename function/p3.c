#include<stdio.h>
int count(int ar[],int s){
  int odd = 0;
  for(int i=0;i<s;i++)
  {
    if(ar[i]%2==1){
        odd++;
    }
  }
  printf("odd value printf %d",odd);
}
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++)
   {
    scanf("%d",&ar[i]);
   } 
   count(ar,a);
    return 0;
}