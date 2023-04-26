#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);

    int value = strcmp(a, b);

    if (value > 0)
    {
        printf("B is smaller\n");
    }
    else if (value < 0)
    {
        printf("A is smaller\n");
    }
    else if (value == 0)
    {
        printf("Same\n");
    }
    return 0;
}