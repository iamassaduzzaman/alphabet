#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = 1, m = n;
     
    for (int i = 0; i < n*2 -1; i++)
    {
        // gap
        for (int l = 1; l < m; l++)
        {
            printf(" ");
        }

        // print *
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }

        if (i < n-1)
        {
            m--;k++;
        }
        else if(i >= n-1)
        {
            m++; k--;
        }
        
        printf("\n");
    }
    return 0;
}