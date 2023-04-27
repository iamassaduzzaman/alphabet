#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    scanf("%s", s);

    int small = 0, c = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            c++;
        }
        else
        {
            small++;
        }
    }

    printf("%d %d", c, small);
    return 0;
}