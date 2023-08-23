 #include<stdio.h>
 int main(){
    int row,col;
    printf("Enter your row and column size : \n");
    scanf("%d%d",&row,&col);

    int A[row][col];
    int ele = row*col;
    printf("Enter array element value : \n");
    for(int i=0;i<row;i++){
        
        for(int j=0;j<col;j++){
            scanf("%d",&A[i][j]);
        }
    } 
    int count = 0;
     for(int i=0;i<row;i++){
        
        for(int j=0;j<col;j++){
           if(A[i][j] == 0){
            count++;
           }
        }
    }
   if(ele==count){
    printf("zore is matrix \n");
   }else{
    printf("no matrix\n");
   }
     return 0;
 }