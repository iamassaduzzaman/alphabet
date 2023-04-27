#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N, K;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    scanf("%d", &K);

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == K)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}