#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = 1, g = n - 1;

    for (int i = 0; i < n; i++)
    {
        // gap
        for (int l = 0; l < g; l++)
        {
            printf(" ");
        }

        // digit
        for (int j = 0; j < k; j++)
        {
            printf("%d", k);
        }
        g--;
        k++;

        printf("\n");
    }
    return 0;
}