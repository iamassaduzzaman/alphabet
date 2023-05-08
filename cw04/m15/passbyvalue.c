#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void hello(int a)
{
    // here is memory address would be diff since hello function recive a
    // copy value of x from main function
    printf("memory address of a in hello: %p\n", &a);
}

int main()
{
    int x = 5;
    hello(x);

    // memory address of x
    printf("memory address of x in main: %p\n", &x);
    return 0;
}