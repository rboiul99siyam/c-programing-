#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int m[a];
    for(int i=0;i<a;i++){
        scanf("%d",&m[i]);
    } 

    int b;
    scanf("%d",&b);

    int n[b];
    for(int i=0;i<b;i++){
        scanf("%d",&n[i]);
    }

    int ans[a+b];

    for(int i=0;i<a+b;i++){
        ans[i] = m[i];
    }
    for(int i=0;i<a+b;i++){
        ans[i] = n[i];
    }

    for(int i=0;i<a+b;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}