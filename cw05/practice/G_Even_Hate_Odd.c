#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // reading input
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        int a[m];
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[j]);
        }

        if (m % 2 == 0)
        {
            int even = 0, odd = 0;
            for (int j = 0; j < m; j++)
            {
                if (a[j] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }

            if (even > odd)
            {
                int r = even - m / 2;
                printf("%d\n", r);
            }
            else if (odd > even)
            {
                int r = odd - m / 2;
                printf("%d\n", r);
            }
            else if (even == odd)
            {
                printf("0\n");
            }
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}