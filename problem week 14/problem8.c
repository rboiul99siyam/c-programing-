#include<stdio.h>
char cha_to_ascii(void){
    char ch;
    scanf("%c",&ch);
    if(ch=='a'&&ch=='z'|| ch=='A'&&ch=='Z'){
        printf("%d",ch);
    }
    return ch;
}
int main(){
    int save = cha_to_ascii();
    printf("%d",save);
    return 0;
}