#include <stdio.h>

void printNOne(int i, int n)
{
    // base case
    if (n == 0)
        return;
    if (n == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d ", n);
    }

    printNOne(1, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printNOne(1, n);
    return 0;
}