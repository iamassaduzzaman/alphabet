#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int V[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &V[i]);
    }

    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < N; i++)
    {
        if (V[i] % 2 == 0)
        {
            evenSum += V[i];
        }
        else
        {
            oddSum += V[i];
        }
    }

    printf("%d %d\n", evenSum, oddSum);
    return 0;
}
