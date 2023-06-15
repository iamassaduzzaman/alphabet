#include <stdio.h>

int proFun(int a[], int i, int n, int sz)
{

    a[i - 1] =a[i - 3] * a[i - 2];
    if (i == n)
        return a[n - 1];

    int x = proFun(a, i += 1, n, sz);
    return x;
}

int main()
{
    int a[1000] = {1, 2};
    int n;
    scanf("%d", &n);

    if (n <= 2)
    {
        if (n == 1)
        {
            printf("%d", a[0]);
        }
        else if (n == 2)
        {
            printf("%d", a[1]);
        }
    }
    else
    {
        int x = proFun(a, 3, n, 100);
        printf("%d", x);
    }

    return 0;
}