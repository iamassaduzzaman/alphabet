#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int k = 1, g = n - 1;
    for (int i = 0; i < n * 2; i++)
    {
        // gap
        for (int m = 0; m < g; m++)
        {
            printf(" ");
        }

        // print *
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }

        // check required condition
        if (i < n - 1)
        {
            g--;
            k += 2;
        }
        else if (i >= n)
        {
            k -= 2;
            g++;
        }

        printf("\n");
    }
    return 0;
}