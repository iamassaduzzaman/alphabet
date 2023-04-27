#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char c[1000];
    scanf("%s", c);

    int count[26] = {0};

    for (int i = 0; i < strlen(c); i++)
    {
        int value = c[i] - 'a';
        count[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', count[i]);
    }

    return 0;
}