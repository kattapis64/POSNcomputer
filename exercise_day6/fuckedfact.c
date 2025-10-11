#include <stdio.h>

int main()
{
    short arr[3000];
    arr[0] = 1;
    int column = 1;
    int temp1 = 0;
    int temp;
    int val;
    for (int j = 2; j < 10; j++)
    {
        for (int i = 0; i < column; i++)
        {
            temp = j * arr[i];
            printf("Temp is %d\n", temp);
            if (temp > 9)
            {
                temp1 = temp / 10;
                printf("Temp1 is %d\n", temp1);

                arr[i] = temp % 10;
            }
            else
            {
                arr[i] = temp + temp1;
                temp1 = 0;
            }

            printf("Array is %d\n\n", arr[i]);
        }
        if (temp > 9)
        {
            column++;
        }
    }
    return 0;
}