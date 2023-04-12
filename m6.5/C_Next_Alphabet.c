#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch == 'z')
        printf("a");

    if (ch == 'Z')
        printf("A");

    if (ch >= 'a' && ch < 'z')
    {
        int next = ch + 1;
        printf("%c\n", next);
    }

    if (ch >= 'A' && ch < 'Z')
    {
        int next = ch + 1;
        printf("%c\n", next);
    }

    return 0;
}