#include<stdio.h>
int main(){
   float salePrice,discount,orginalPrice;
   scanf("%f%f",&discount,&salePrice);
   orginalPrice = salePrice/(1-discount/100);
   printf("%0.2f",orginalPrice); 
    return 0;
}