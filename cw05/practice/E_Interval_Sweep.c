#include <stdio.h>

int main()
{
    int a, b, sum;
    scanf("%d %d", &a, &b);

    sum = a + b;

    if (sum == 0)
    {
        printf("NO\n");
    }
    else
    {
        if (sum % 2 == 0)
        {
            if (a == b)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }

        if (sum % 2 != 0)
        {
            if (a == b + 1)
            {
                printf("YES\n");
            }
            else if (a + 1 == b)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}