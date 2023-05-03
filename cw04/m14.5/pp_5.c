

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// capital to small Alphabet
char capital_to_small(char ch)
{
    char capital = ch + 32;
    return capital;
} 


int main()
{
    char x;
    scanf("%c", &x);

    printf("%c\n", capital_to_small(x));
    return 0;
}