#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// return ascii value of a character
int returnAscii(char ch)
{
    int val = ch;
    return val;
}

int main()
{
    char ch;
    scanf("%c", &ch);

    int val = returnAscii(ch);
    printf("%d\n", val);

    return 0;
}