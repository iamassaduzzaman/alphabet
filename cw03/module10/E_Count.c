#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char n[1000001];

    scanf("%s", &n);
    int len = strlen(n), sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += (n[i] - '0');
    }

    printf("%d", sum);
    return 0;
}