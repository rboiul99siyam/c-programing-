#include<stdio.h>
void add_print(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<a;i++){
        printf("%d ",i);
    }
    printf("%d",a);
}
int main(){
    add_print();
    return 0;
}