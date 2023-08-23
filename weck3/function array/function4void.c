#include<stdio.h>
int get_vald(void){
    int a,b;
    scanf("%d%d",&a,&b);
    int s = a+b;
    return s;

}
int main(){
  int save =  get_vald();
    printf("%d",save);
    return 0;
}