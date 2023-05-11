#include <stdio.h>

void printOneN(int i, int n)
{
    // base case
    if (i == n + 1)
        return;
    printf("%d\n", i);
    printOneN(i + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    printOneN(1, n);
    return 0;
}