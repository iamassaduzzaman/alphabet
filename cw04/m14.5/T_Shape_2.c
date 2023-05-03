#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int k = 1, g = n - 1;
    for (int i = 0; i < n; i++)
    {
        // gap
        for (int m = 0; m < g; m++)
        {
            printf(" ");
        }
        g--;

        // print *
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        k += 2;

        printf("\n");
    }
    return 0;
}