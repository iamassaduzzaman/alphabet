#include <stdio.h>

int main()
{
    char s[1001];
    fgets(s, 1001, stdin);

    int capital = 0, small = 0, spaces = 0, i = 0;

    while (s[i] != '\0')
    {
        // count capital character
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }
        
        // count small character
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }

        // count spaces
        if (s[i] == ' ')
        {
            spaces++;
        }

        i++;
    }

    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", capital, small, spaces);
    return 0;
}