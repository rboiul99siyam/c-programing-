#include<stdio.h>
int no_perameter(){
    int a,b;
    scanf("%d%d",&a,&b);
    int save = a-b;
    return save;
}
int main(){
    int s = no_perameter();
    printf("%d",s);
    return 0;
}