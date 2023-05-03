#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int numbers[5] = {3, 5, 6, 4, 7};

    int n = 5, flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int val = numbers[i] + numbers[j];
            if (val == 13)
            {
                flag = 1;
            }

            // printf("%d %d\n", numbers[i], numbers[j]);
        }

        printf("\n");
    }

    if (flag == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}