#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    } 

    int x;
    scanf("%d",&x);
    
    int name = 0;
    for(int i=1;i<=a-1;i++){

        for(int j=i+1;j<a;j++){
       
       if(arr[i] + arr[j] ==0){
        name = 1;
       }

        }
    }

    if(name = 0){
        printf("NO");
    }else{
        printf("YES");
    }
    return 0;
}