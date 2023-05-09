#include <stdio.h>

void printArray(int *a, int n, int i)
{
    if (i == n) return; // base case

    printf("%d ", a[i]);
    printArray(a, n, i+1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    printArray(a, n, 0);
    printf("\n");
    return 0;
}
