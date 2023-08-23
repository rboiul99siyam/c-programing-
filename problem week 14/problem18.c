#include<stdio.h>
void soting_value(void){
  int ar[3];
  for(int i=0;i<3;i++){
    scanf("%d",&ar[i]);
  }
  int A = ar[0];
  int B = ar[1];
  int C = ar[2];

  for(int i=0;i<2;i++){
    for(int j=i+1;j<3;j++){
        if(ar[i]>ar[j]){
            int tmp = ar[i];
            ar[i] = ar[j];
            ar[j] = tmp;
        }
    }
  }
  for(int i=0;i<3;i++){
    printf("%d\n",ar[i]);
  }
  printf("\n");
  printf("%d\n%d\n%d\n",A,B,C);
}
int main(){
    soting_value();
    return 0;
}