#include<stdio.h>

int count_before_zero(int ar[],int size){
    int count =0;
    for(int i=0;i<size;i++){
        if(ar[i]==0){
            break;
        }else{
            count++;
        }
    }
 return count;
}
int main(){
    int range;
    scanf("%d",&range);
    int ar[range];
    for(int i=0;i<range;i++){
        scanf("%d",&ar[i]);
    }

   int storKorlam = count_before_zero(ar,range);
   printf("%d",storKorlam);
    return 0;
}