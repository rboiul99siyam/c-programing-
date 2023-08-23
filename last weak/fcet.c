#include<stdio.h>
int fect(int a)
{   //base case
    if(a==0)
    {
        return 1;
    }
    //function 
    int ans = fect(a-1);
   return ans*a;

}
int main(){
   //input n;
   int n;
   scanf("%d",&n);
   int save =fect(n);
   printf("%d",save);

    return 0;
}