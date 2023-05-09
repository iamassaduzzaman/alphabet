#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void hello()
{
    printf("hello\n");
    hello();
}

int main()
{
    hello();
    return 0;
}