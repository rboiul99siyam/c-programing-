#include<stdio.h>
int add(int x,int y){
    int res = x + y;
    printf("%d",res);
    return res;
}
int main(){
    add(10,20);
    add(20,30);
    add(40,40);
}