#include<stdio.h>
void main(){
    int num[3][3];
    printf("Enter 9 number : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    printf("Your entered matix value :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
}