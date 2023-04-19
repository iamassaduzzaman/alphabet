#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // way: 01
    char name[5] = {'J', 'o', 'h', 'n'};
    // there is no grantee it will take a null character automatically

    // way: 02
    char fname[4] = "John";
    // it will take null character \0 automatically grantee
    // but I have to give the size including null character
    // remember it's double quotation not single

    printf("%s", fname);
    // printf function with %s print string without loop but in this case we have to
    // specify the size of array including \0. otherwise it will print zibrish after it

    for (int i = 0; i < 4; i++)
    {
        printf("%c\n", fname[i]);
    }
    // if we use loop to print a string we don't need to count the null character
    // when we declaring the size of string either way 01 or 02
    return 0;
}