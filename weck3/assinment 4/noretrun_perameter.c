#include<stdio.h>
int get_sum(int x,int y){
    int save = x + y;
    printf("%d",save);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    get_sum(a,b);
    return 0;
}