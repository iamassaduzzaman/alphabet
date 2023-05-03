#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int g = N - 1;

    for (int i = 0; i < N; i++)
    {
        // print gap
        for (int j = 0; j < g; j++)
        {
            printf(" ");
        }
        g--;

        // print *
        for (int k = 0; k < i + 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}