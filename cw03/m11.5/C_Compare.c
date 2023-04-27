#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char word1[21], word2[21];
    scanf("%s %s", &word1, &word2);

    int value = strcmp(word1, word2);

    if (value > 0)
    {
        printf("%s\n", word2);
    }

    if (value < 0)
    {
        printf("%s\n", word1);
    }

    if (value == 0)
    {
        printf("%s\n", word1);
    }

    return 0;
}