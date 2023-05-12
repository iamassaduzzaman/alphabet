#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int p = 1, g = n - 1;
    for (int i = 0; i < n; i++)
    {
        // gap
        for (int m = 0; m < g; m++)
        {
            printf(" ");
        }
        g--;

        // ^ and *
        for (int j = 0; j < p; j++)
        {
            if (i % 2 != 0)
            {
                printf("*");
            }
            else
            {
                printf("^");
            }
        }
        printf("\n");
        p += 2;
    }
    return 0;
}