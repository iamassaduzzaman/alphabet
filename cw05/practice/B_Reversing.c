#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int zeroIndex[n], l = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            zeroIndex[l] = i;
            l++;
        }
    }

    int x = 0;
    for (int i = 0; i < l; i++)
    {
        int m = 0;
        int zero = zeroIndex[x] - 1;
        while (m < zero)
        {
            int temp = a[m];
            a[m] = a[zero];
            a[zero] = temp;
            m++;
            zero--;
        }
        x++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}