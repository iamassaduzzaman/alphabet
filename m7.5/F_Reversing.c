#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int number[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &number[i]);
    }

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", number[i]);
    }
    return 0;
}