#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[11];
    char b[11];
    scanf("%s", &a);
    scanf("%s", &b);

    int alen = strlen(a);
    int blen = strlen(b);

    int tlen = alen + blen;
    char new[tlen];

    int i = 0, j = 0;
    while (a[i] != '\0')
    {
        new[j] = a[i];
        i++;
        j++;
    }

    i = 0;
    while (b[i] != '\0')
    {
        new[j] = b[i];
        i++;
        j++;
    }

    new[j] = '\0';

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%d %d\n", alen, blen);
    printf("%s\n", new);
    printf("%s %s\n", a, b);
    return 0;
}