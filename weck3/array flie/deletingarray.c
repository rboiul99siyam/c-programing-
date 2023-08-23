#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    } 

    int pos;
    scanf("%d",&pos);

    for(int i =pos;i<a-1;i++){
        arr[i] = arr[i+1];
    }
    for(int i=0;i<a-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}