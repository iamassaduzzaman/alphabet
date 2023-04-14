#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int number[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &number[i]);
    }

    int k = 0;
    for (int i = 0; i < N; i++)
    {
        if (number[i] < 0)
        {
            k = 2;
        }

        if (number[i] > 0)
        {
            k = 1;
        }

        if (number[i] == 0)
        {
            k = 0;
         }
        printf("%d ", k);
    }

    return 0;
}