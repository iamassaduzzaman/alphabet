#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= m)
        {
            int value = a[i] - 1;
            count[value]++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}