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

    int M;
    scanf("%d", &M);
    int c = -1;
    for (int i = 0; i < N; i++)
    {
        if (number[i] == M)
        {
            c = i;
            break;
        }
    }

    printf("%d\n", c);
    

    return 0;
}