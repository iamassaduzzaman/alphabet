#include <stdio.h>

void printDigit(int n)
{
    // base case
    if (n == 0)
        return;

    int last = n % 10;
    printDigit(n / 10);

    printf("%d ", last);
}

int main()
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        printDigit(n);
        if (n == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}