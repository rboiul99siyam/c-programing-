#include<stdio.h>
#include<string.h>
void fun(char ch[]){
    printf("%d",strlen(ch));

}
int main(){
    char a[20];
    scanf("%s",a);
    fun(a);
    return 0;
}