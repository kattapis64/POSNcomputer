#include <stdio.h>
#include <math.h>

int main()
{

    int len1 = 3;
    int len2 = 2;
    int arr2[2];
    // modify this for value on each iteration of multiplying;
    int n = 43;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = n % 10;
        n /= 10;
    }
    int arr1[3] = { 1,5, 7 };
    int len_ans = 0;
    int temp;
    int temp1 = 0;
    int res[len1 + len2];
    int tem[len1 + len2];
    for (int i = 0; i < len1 + len2; i++)
    {
        res[i] = 0;
        tem[i] = 0;
    }
    for (int i = 0; i < len2; i++)
    {
        for (int j = 0; j < i; j++)
        {
            tem[j] = 0;
        }
        temp1 = 0;
        for (int j = 0 + i; j < len1 + i; j++)
        {
            temp = arr2[i] * arr1[j - i];
            printf("Temp si %d\n", temp);
            if (temp > 9)
            {
                tem[j] = temp % 10 + temp1;
                if (tem[j] > 9) {
                    temp1 = tem[j] / 10;

                    tem[j] = tem[j] % 10;
                }
                else {
                    printf("adding %d temp to %d temp1 so tem[j]=%d\n", temp, temp1, tem[j]);

                    temp1 = temp / 10;

                }


                if (j - i == len1 - 1) {
                    tem[j + 1] = temp1 + temp / 10;
                    printf("Temp[j]is %d\n", tem[j + 1]);
                }
            }
            else
            {
                printf("adding %d temp to %d temp1\n", temp, temp1);
                tem[j] = temp + temp1;
            }
        }
        for (int m = 0; m < len1 + len2; m++)
        {
            res[m] += tem[m];
            printf("%d ", tem[m]);
            if (res[m] > 9)
            {
                res[m + 1] = res[m] / 10;
                res[m] = res[m] - 9;
            }
        }
        printf("\n");

    }
    for (int m = 0; m < len1 + len2; m++)
    {
        printf("%d ", res[m]);
    }

    return 0;
}