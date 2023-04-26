#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);

    int blen = strlen(b);

    for (int i = 0; i <= blen; i++)
    {
        a[i] = b[i];
    }

    printf("%s %s", a, b);
    return 0;
}