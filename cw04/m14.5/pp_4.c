#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// small to capital Alphabet
char small_to_capital(char ch)
{
    char capital = ch - 32;
    return capital;
} 


int main()
{
    char x;
    scanf("%c", &x);

    printf("%c\n", small_to_capital(x));
    return 0;
}