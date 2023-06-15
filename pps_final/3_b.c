#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        int x; scanf("%d", &x);
        sum += (x%100);
    }

    if (sum <= n)
    {
        printf("Yess!!Yess!! here we go\n");
    }
    else
    {
        printf("Oh!, NO\n");
    }
    return 0;
}