#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int k = n * 2;


    for (int i = 0; i < n; i++)
    {
        // gap       
        for (int m = 0; m < i; m++)
        {
            printf(" ");
        }
        
        // astrick
        for (int j = 0; j < k - 1; j++)
        {
            printf("*");
        }
        k -= 2;

        printf("\n");
    }
    return 0;
}