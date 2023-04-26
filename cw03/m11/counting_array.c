#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int count[7] = {0};
    for (int i = 0; i < n; i++)
    {
        count[numbers[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d = %d\n", i, count[i]);
    }
    return 0;
}