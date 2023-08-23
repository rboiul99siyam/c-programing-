#include<stdio.h>
#include<string.h>
int fun(char a[],int i)
{
    //base case 
    if(a[i]=='\0')
    {
        return 0;
    }
    // function 
    int ans = fun(a,i+1);
    //capital to small
    if(a[i]>=65 && a[i]<=90)
    {
        a[i] = a[i] + 32;
    }
    if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='i'||a[i]=='u')
    {
        return ans+1;
    }
    else{
        return ans;
    }
}
int main(){
   char s[204];
   // charcater s input  
   fgets(s,204,stdin); 
   // count funciton argument
   int save = fun(s,0);
   printf("%d",save);
    return 0;
}