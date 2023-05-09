#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = 1, m = n;
    for (int i = 0; i < n * 2 - 1; i++)
    {
        // gap
        for (int l = 1; l < m; l++)
        {
            printf(" ");
        }

        for (int j = 0; j < k; j++)
        {
            printf("*");
        }

        if (i < n - 1)
        {
            m--;
            k += 2;
        }
        else if (i >= n - 1)
        {
            m++;
            k -= 2;
        }
        printf("\n");
    }
    return 0;
}