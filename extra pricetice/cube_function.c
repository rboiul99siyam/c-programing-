#include<stdio.h>
double cube(int x){
  double res = (x*x*x);
  return res;
}
int main(){
   int a;
   printf("Enter a any number now : \n");
   scanf("%d",&a);
   double save = cube(a);
   printf("%0.2lf",save);
    return 0;
}