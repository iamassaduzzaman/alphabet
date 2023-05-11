#include <stdio.h>

int count(char c[], int i)
{
    // base case
    if (c[i] == '\0')
        return 0;

    int s = count(c, i + 1);

    if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' || c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U')
    {
        return s + 1;
    }
    else
    {
        return s;
    }
}

int main()
{
    char c[200];
    fgets(c, 200, stdin);

    int t = count(c, 0);
    printf("%d\n", t);
    return 0;
}