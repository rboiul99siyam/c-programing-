#include<stdio.h>
int main(){
  int a;long long int n;
  scanf("%d%lld",&a,&n);
 long long  int ar[a];
  for(int i=0;i<a;i++){
    scanf("%lld",&ar[i]);
  }
  for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        if(ar[i]<ar[j]){
            long long int tmp = ar[i];
            ar[i]=ar[j];
            ar[j] = tmp;
            i++;
            j--;
        }
    }
  }
  long long int sum=0;
  for(int i=0;i<n;i++){
    if(ar[i]>0){
     sum = sum +ar[i];
    }  
  }
  printf("%lld",sum);
    return 0;
}