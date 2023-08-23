// eta infinity te porinot hoyche 
#include<stdio.h>
void fun(){
    printf("Fun\n");
    fun();
}
int main(){
    fun();
    return 0;
}