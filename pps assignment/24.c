#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = n*2 -1, m = 0;
    for (int i = 0; i < n; i++)
    {
        // gap
        for (int l = 0; l < m; l++)
        {
            printf(" ");
        }
        m++;
        
        // print astric
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        k -= 2;
        printf("\n");
    }
    return 0;
}