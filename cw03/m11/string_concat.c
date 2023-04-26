#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);
    
    int alen = strlen(a);
    int blen = strlen(b);
    int tlen = alen + blen;

    char apb[tlen];

    int i = 0, j = 0;

    while (a[i] != '\0')
    {
        apb[j] = a[i];
        i++;
        j++;
    }

    i = 0;
    while (b[i] != '\0')
    {
        apb[j] = b[i];
        i++;
        j++;
    }
    
    apb[j] = '\0';

    printf("%s\n", apb);

    return 0;
}