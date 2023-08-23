//odd value counting 
#include<stdio.h>
void counting_odd(void){
      int a,odd=0;
   scanf("%d",&a);

   int arr[a];
   for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
   } 

   for(int i=0;i<a;i++){
    if(arr[i]%2==1){
        odd++;
    }
   }
   printf("plaese odd value print %d",odd);
}
int main(){
 counting_odd();
 counting_odd();
    return 0;
}