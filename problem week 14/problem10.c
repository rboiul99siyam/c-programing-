#include<stdio.h>
int frist_and_last_sum(int number_value){
 int frist_digit = number_value/1000;
 int last_digit = number_value%10;
 int sum =  frist_digit+last_digit;
 return sum;
 
}
int main(){
    int a;
    scanf("%d",&a);
    int save = frist_and_last_sum(a);
    printf("%d",save);
    return 0;
}