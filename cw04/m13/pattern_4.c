#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, k = 1, g;
    scanf("%d", &n);

    g = n - 1;
    for (int i = 0; i < (n*2) - 1; i++)
    {
        // gap
        for (int l = 0; l < g; l++)
        {
            printf(" ");
        }

        // print *
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }

        if (i <= n - 1)
        {
        k +=2;
        g--;
        }
        else
        {
            k -=2;
            g++;
        }
        printf("\n");
    }
    return 0;
}