#include<stdio.h>
char char_to_ascci(char x){
  if(x<65 && x>90){
    printf("%c",x);
  }
}
void main(){
char ch;
  scanf("%c",&ch);
  char save = char_to_ascci(ch);
  printf("%c",save+32);

}