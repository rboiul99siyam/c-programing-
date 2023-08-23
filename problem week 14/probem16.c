#include<stdio.h>
#include<string.h>
void my_len(char ch[]){
     printf("%d",strlen(ch));
}
int main(){
    char ch[20]="hello";
    my_len(ch);
    return 0;
}