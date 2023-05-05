/*
Pass by value: Means that a copy of the value being passed to the function,
leaving the original value unchanged.

For example: In the following code,
the function passByValue receives a copy of the value of x and changes the copy,
leaving the original value of x unchanged.
*/

#include <stdio.h>

void passByValue(int num)
{
    num = num + 1;
}

int main()
{
    int x = 10;
    passByValue(x);
    printf("%d\n", x);
    return 0;
}
