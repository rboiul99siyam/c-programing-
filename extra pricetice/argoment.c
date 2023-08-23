#include<stdio.h>
int add(int x ,int y){
    int res = x + y;
    return res;
}
int main(){
    int save = add(10,20);
    printf("%d",save);
}