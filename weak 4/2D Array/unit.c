  #include<stdio.h>
  int main(){
      int row,col;
    printf("Enter your row and column size : \n");
    scanf("%d%d",&row,&col);

    int A[row][col];
    printf("Enter array element value : \n");
    for(int i=0;i<row;i++){
        
        for(int j=0;j<col;j++){
            scanf("%d",&A[i][j]);
        }
    }

    int flag=1;
    if(row !=col){
        flag =0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j){
                if(A[i][j] != 1){
                    flag = 0;
                }
            continue;
            }
            if(A[i][j]!=0){
                flag = 0;
            }
        }
    }

   if(flag==1){
    printf("unit matrix \n");
   }
   else{
    printf("no digonal\n");
   }
      return 0;
  }