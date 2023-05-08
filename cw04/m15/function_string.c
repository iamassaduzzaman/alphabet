#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void hey(char *n)
{
    printf("%s\n", n);
    // string get the full lenght
    printf("length = %d\n", strlen(n));

    // we can't return a full array through a function
    char greet[] = "hi";

    // it will only return char h
    return greet;

    // rest of the element of the array will be eraged after returning
    //the greet array beacase here greet is a static array
}

int main()
{
    char name[] = "John";

    hey(name);
    return 0;
}