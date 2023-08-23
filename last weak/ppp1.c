#include<stdio.h>
int main(){
   int width,height;
   scanf("%d%d",&width,&height);
   if(width!=height){
    printf("RECETANGEL\n");
   } else{
    printf("SQUARE\n");
   }
    return 0;
}