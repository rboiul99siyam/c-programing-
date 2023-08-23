#include<stdio.h>
#include<string.h>
int  fun(char ch[],int size){
  int cnt = 0;
  for(int i=0;i<size;i++){
    if(ch[i]=='\0'){
        cnt++;
    }
  }
}
int main(){
    char s[100];
    scanf("%s",s);
   int sc = fun(s,0);
   printf("%d",sc);
    return 0;
}