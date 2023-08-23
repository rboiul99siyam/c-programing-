
#include <stdio.h>
int main()
{
    int flag = 0, size;
    scanf("%d", &size);
    int ar[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                if (ar[i][j] != 1)
                {
                    flag = 1;
                }
            }

            else if (ar[i][j] != 0)
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;}
