#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {4, 5, 3, 1, 9};

    // first element of arr
    printf("first element of arr = %d\n", arr[0]);

    // first element of arr since arr is a pointer
    // name of the array always hold the 0-th element's address of memory
    printf("first element of arr = %d\n", *arr);

    // address of the 0-th element of the array
    printf("first element address in decimal = %d\n", arr); // in decimal
    printf("first element of address in hex = %p\n", arr);  // in hex
    return 0;
}