
// #include<stdio.h>
// void fun(int ar[],int i,int size){
//    if(i%2==0){
//         printf("%d ",ar[i]);
//     }
//    if(i==size) return ;
//    fun(ar,i-1,size);
// }
// int main(){
//    int a;
//    scanf("%d",&a);
//    int ar[a];
//    for(int i=0;i<a;i++)
//    {
//     scanf("%d",&ar[i]);
//    } 

//    fun(ar,a-1,0);
//     return 0;
// }

#include<stdio.h>
void fun(int ar[],int input,int size)
{
    if(input%2==0)
    {
       printf("%d ",ar[input]);
    }
    if(input==size) return;
    fun(ar,input-1,size);
}
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++)
   {
    scanf("%d",&ar[i]);
   } 
   fun(ar,a-1,0);
    return 0;
}