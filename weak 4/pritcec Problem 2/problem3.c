#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
  for(int i=0;i<a;i++){
     int height,width;
   scanf("%d%d",&height,&width);
   if(width==height){
    printf("Square\n");
   } 
    if(height != width){
    printf("Rectangle\n");
   }
  }

   
    return 0;
}


