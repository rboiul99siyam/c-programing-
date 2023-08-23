#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int ar[a];
    for(int i=0;i<a;i++){
     scanf("%d",&ar[i]);
    } 
    int x;
    scanf("%d",&x);
    int flag = 0;
    for(int i=0;i<a-1;i++){
        
        for(int j=i+1;j<a;j++){
           
           if(ar[i] + ar[j] == x){
                
                flag = 1;

           }
        }
    }
    if(flag==0){
        printf("NO");
    }else{
        printf("YES\n");
    }
    return 0;
}