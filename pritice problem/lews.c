#include<stdio.h>
#include<limits.h>
int main(){
    int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
    int min = INT_MAX,pos;
    for(int i=0;i<a;i++)
    {
       if(ar[i]<min){
        min = ar[i];
        pos =i+1;
       }
    }
    printf("%d %d",min , pos);
    return 0;
}