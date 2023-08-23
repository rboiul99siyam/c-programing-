#include <stdio.h>
int main()
{
    int tt;
    scanf("%d", &tt);
    for (int i = 0; i < tt; i++)
    {
        long long int sum, res, x, y, z, total;
        scanf("%lld%lld%lld%lld", &total, &x, &y, &z);
        sum = x + y + z;
        res = total - sum;
        printf("%lld\n", res);
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//    int a;
//    scanf("%d",&a);
//    for(int i=0;i<a;i++){

//     long long int res,s,b,c,d ,t;
//     scanf("%d%d%d%d",&b,&c,&d,&t);
//     s = b+c+d;
//     res = t - s;
//     printf("%d\n",res);
//    } 
//     return 0;
// }