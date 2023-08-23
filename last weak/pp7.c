#include<stdio.h>
int main(){
   float discount,salePrice,oragnal;
   scanf("%f%f",&discount,&salePrice); 
   oragnal = salePrice/(1-discount/100);
   printf("%0.2f",oragnal);
    return 0;
}