 #include<stdio.h>
 void myFunciton(int *p){
   *p = 500;
 }
 int main(){
     int a = 100;
     myFunciton(&a);
     printf("%d",a);
     return 0;
 }