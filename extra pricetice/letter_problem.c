#include<stdio.h>
#include<string.h>
void letter(int x){
  for(int i=0;i<x;i++){
    char size[101];
    scanf("%s",&size);
    int s = strlen(size);
    if(s>10){
        printf("%c%d%c",size[0],s-2,size[s-1]);
    }else{
        printf("%s",size);
    }
  }
}
int main(){
    int a;
    scanf("%d",&a);
    letter(a);
    return 0;
}