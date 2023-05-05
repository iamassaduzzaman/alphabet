#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = 1, g = n - 1;

    for (int i = 0; i < n * 2 - 1; i++)
    {
        // gap
        for (int l = 0; l < g; l++)
        {
            printf(" ");
        }

        // digit
        for (int j = 0; j < k; j++)
        {
            printf("%d", j + 1);
        }

        // condition
        if (i < n - 1)
        {
            g--;
            k += 2;
        }
        else if (i >= n - 1)
        {
            g++;
            k -= 2;
        }
        printf("\n");
    }
    return 0;
}