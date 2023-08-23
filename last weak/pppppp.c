// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     ptr =(int *)malloc(5*sizeof(int));
//     if(ptr==NULL){
//         printf("Memoy is not alocated\n");
//     }else{
//         printf("Memoy is alocated successfully\n");
//         free(ptr);
//         printf("Memoy freed successfully \n");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
   int a[5]={1,2,3,4,5};
   for(int i=0;i < 5; i++)
   {
    printf("%p\n",&a[i]);
   } 
    return 0;
}