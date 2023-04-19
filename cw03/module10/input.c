#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char name[3];
    scanf("%s", name);
    printf("%s", name);

    // if we declare size 3 and take input 'John' and try to print it
    // it will print the string without any error on windows machine
    // but it will through an error in online compiler and linux machine
    // why windows doesn't through and error cuz windows allocate extra memory if needed to

    // another things in this case: it will take \0 whether you give a proper size or not
    return 0;
}