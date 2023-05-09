#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = 1, m = n;
     
    for (int i = 0; i < n; i++)
    {
        // gap
        for (int l = 1; l < m; l++)
        {
            printf(" ");
        }
        m--;

        // print *
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }
    return 0;
}