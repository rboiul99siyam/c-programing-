#include<stdio.h>
void math_abs(){
int a;
scanf("%d",&a);
if(a>0){
    printf("%d",a);
}
else if(a<0){
    printf("%d",a*(-1));
}
}
int main(){
    math_abs();
    return 0;
}