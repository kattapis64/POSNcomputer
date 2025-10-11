#include <stdio.h>
int main()
{
    int mata[3][3];
    int matb[3][3];
    int dummy;
    int res[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mata[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matb[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            sum = 0;
            for (int j = 0; j < 3; j++)
            {
                sum += mata[i][j] * matb[j][k];
            }
            res[i][k] = sum;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}