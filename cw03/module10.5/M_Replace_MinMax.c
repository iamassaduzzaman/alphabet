#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int min = INT_MAX, max = INT_MIN, minIndex = 0, maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
            minIndex = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            maxIndex = i;
        }
    }

    num[minIndex] = max;
    num[maxIndex] = min;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}