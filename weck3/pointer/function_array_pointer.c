#include<stdio.h>
int main(){
   int arr[5] = {10 ,20,30,40,50};
//    printf("0th number index address - %p\n",&arr[0]);
//    printf("0th number index addreess - %p\n",arr); 
// printf("0th number index value address %p\n",*arr);
// printf("0th number index value - %p\n",&arr);

printf("0 th number index value %d\n",arr[0]);
printf("0 th number index value %d\n",*arr);
printf("1 number index value %d\n",*(arr+1));
    return 0;
}