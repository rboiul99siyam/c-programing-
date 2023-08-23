// submit done
#include<stdio.h>
int fun(int ch[],int size){
   long long int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum +ch[i];
    }
    printf("%lld",sum);
    return sum;
}
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++){
    scanf("%d",&ar[i]);
   } 
   fun(ar,a);

    return 0;
}