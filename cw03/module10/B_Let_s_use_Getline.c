#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[1000001];

    fgets(a, 1000001, stdin);
    int len = strlen(a);

    for (int i = 0; i < len; i++)
    {
        if (a[i] == '\\')
        {
            break;
        }
        printf("%c", a[i]);
    }
    return 0;
}