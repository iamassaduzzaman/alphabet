#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, k, s;
    scanf("%d", &n);
    
    s = n - 1;
    k = 1;
    for (int i = 0; i < n; i++)
    {
        // print space
        for (int l = 0; l < s; l++)
        {
            printf(" ");
        }

        // print *
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }

        // update value
        k += 2;
        s--;
        printf("\n");
    }
    return 0;
}