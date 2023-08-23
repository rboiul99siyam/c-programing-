 #include<stdio.h>
 void myFunction (int x){
    printf("x er address %p",&x);
 }
 int main(){
     int x =10;
     printf("x er address %p",&x);
     myFunction(x);
     return 0;
 }