#include <stdio.h>
#include <limits.h>

int main()
{
    int N;
    scanf("%d", &N);

    int number[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &number[i]);
    }

    int min = INT_MAX, position;
    for (int i = 0; i < N; i++)
    {
        if (number[i] < min)
        {
            min = number[i];
            position = i + 1;
        }
    }

    printf("%d %d", min, position);
    return 0;
}