#include <stdio.h>

void printRecursion(int x, int n)
{
    // base case
    if (x == n + 1)
        return;
    printf("I love Recursion\n");
    printRecursion(x + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    printRecursion(1, n);
    return 0;
}