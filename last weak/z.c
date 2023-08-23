#include<stdio.h>
int main(){
   int row,col;
   scanf("%d%d",&row,&col);
   int ar[row][col];
   int ele = row*col;
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
        scanf("%d",&ar[i][j]);
    }
   }
  int count = 0;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      count++;
    }
  }
if(ele==count){
    printf("zore matrix ");
}else{
    printf("no zore matrix\n");
}
    return 0;
}