#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    char numbers[n];
    scanf("%s", numbers);

    for (int i = 0; i < n; i++)
    {
        int value = numbers[i] - 48;
        sum += value;
    }

    printf("%d\n", sum);
}