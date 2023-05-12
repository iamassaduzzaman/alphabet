#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int t = 0, p = 0;

    for (int i = 0; i < n; i++)
    {
        int tiger, pathan;
        scanf("%d %d", &tiger, &pathan);

        if (tiger > pathan)
        {
            t++;
        }

        if (pathan > tiger)
        {
            p++;
        }
    }

    // check who wins
    if (t > p)
    {
        printf("Tiger\n");
    }
    else if (p > t)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }
    return 0;
}