#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void hello(int *b) // recieving address of x
{
    // address of x
    printf("address of x through pointer = %p\n", b);
}

int main()
{
    int x = 10;
    
    // passing address of x
    hello(&x);

    // address of x
    printf("address of x = %p\n", &x);
    return 0;
}