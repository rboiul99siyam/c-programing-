#include<stdio.h>
char small_to_capital(void){
    char ch;
    scanf("%c",&ch);
    if(ch=='a'&& ch=='z'){
        printf("%c",ch);
    }
}
int main(){
    char save = small_to_capital();
    printf("%c",save-32);
    return 0;
}