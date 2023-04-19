#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    // string is a another version of array.
    // we can say string is a array which hold bunch of character.
    char ch[5];

    // read char
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &ch[i]);
    }

    // print it
    for (int i = 0; i < 5; i++)
    {
        printf("%c", ch[i]);
    }
    return 0;
}