#include<stdio.h>
int get_sum(){
    int a,b;
    scanf("%d%d",&a,&b);
    int s = a + b;
    return s;
}
int main(){
    
    int save = get_sum();
    printf("%d",save);
    return 0;
}