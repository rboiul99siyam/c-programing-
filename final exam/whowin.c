// #include<stdio.h>
// int main(){
//    int x, t = 0,p = 0;
//    scanf("%d",  &x);
//    for(int i = 0; i < x; i++)
//    {
//       int tig , pah;
//       scanf("%d %d",&t ,&p);
//          if(tig > pah){
//              t++;
//          }

//          else if(tig < pah)
//          {
//             p++;
//          }

//          if(tig > pah)
//          {
//             printf("Tiger\n");
//          }
//          else if(tig < pah )
//          {
//               printf("Pathan\n");
//          }
//          else{
//                 printf("Draw\n");
//          }
//    } 
//     return 0;
// }


#include <stdio.h>
int main()
{
    int x, tig = 0, pat = 0;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        int t, p;
        scanf("%d%d", &t, &p);
        if (t > p)
        {
            tig++;
        }
        else if (t < p)
        {
            pat++;
        }
    }

    if (tig > pat)
        {
            printf("Tiger\n");
        }

    else if (tig < pat)
    {
        printf("Pathan\n");
    }

    else
    {
        printf("Draw\n");
    }
    return 0;
}