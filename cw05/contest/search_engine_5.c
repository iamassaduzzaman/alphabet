#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int n1, f, index = 0, flag = 0;
        scanf("%d", &n1);
        int a[n1];
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &a[j]);
        }
        scanf("%d", &f);

        for (int k = 0; k < n1; k++)
        {
            if (f == a[k] && flag == 0)
            {
                index = k + 1;
                flag = 1;
            }
        }

        if (flag == 1)
        {
            printf("Case %d: %d", i + 1, index);
        }
        else
        {
            printf("Case %d: Not Found", i + 1);
        }
        printf("\n");
    }
    return 0;
}