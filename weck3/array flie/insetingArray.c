#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int array[a+1];
    for(int i=0;i<a;i++){
        scanf("%d",&array[i]);
    } 

    int poss,value ;
    scanf("%d%d",&poss,&value);

    for(int i=a;i>=poss+1;i--){
        array[i] = array[i-1];
    }
    array[poss] = value;
    for(int i=0;i<=a;i++){
        printf("%d ",array[i]);
    }
    return 0;
}