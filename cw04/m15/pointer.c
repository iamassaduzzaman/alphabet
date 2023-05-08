#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *ptr = &x;

    // give the value of x
    printf("vlaue of x = %d\n", x);

    // give the value of x since *ptr point to the x
    // its called dereference
    printf("vlaue of *ptr = %d\n", *ptr);

    // give the memory address of pointer variable itself
    printf("address of ptr = %p\n", &ptr);

    // give the memory address of x
    printf("address of ptr = %p\n", ptr);
    printf("address of x = %p\n", &x);
    return 0;
}