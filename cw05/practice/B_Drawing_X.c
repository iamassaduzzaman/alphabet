#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && i != n / 2)
            {
                printf("\\");
            }

            if (i + j == (n-1) && i != n / 2)
            {
                printf("/");
            }

            if (i == j && i == n / 2)
            {
                printf("X");
            }

            if (i != j && i + j != (n-1))
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}