#include<stdio.h>
long long int solve(long long int ar[],int n,int i){
 if(i==n){
    return 0;
 };//base case
 return ar[i]+solve(ar,n,i+1);
}
int main(){
   int a;
   scanf("%d",&a);
   long long int ar[a];
   for(int i=0;i<a;i++){
    scanf("%lld",&ar[i]);
   } 
   long long int c=solve(ar,a,0);
   printf("%lld",c); 
    return 0;
}

// #include<stdio.h>
// long long int solve(long long int ar[],int n,int i){
//  if(i==n){
//     return 0;
//  };//base case
//  return ar[i]+solve(ar,n,i+1);
// }
// int main(){
//    int a;
//    scanf("%d",&a);
//    long long int ar[a];
//    for(int i=0;i<a;i++){
//     scanf("%lld",&ar[i]);
//    } 
//    long long int c=solve(ar,a,0);
//    printf("%lld",c); 
//     return 0;
// }