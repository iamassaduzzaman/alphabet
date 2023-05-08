#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void hello(int *arr, int sz)
{
    printf("first element of the array = %d\n", 0 [arr]);
    printf("second element of the array = %d\n", 1 [arr]);
}

int main()
{
    int arr[5] = {4, 5, 3, 1, 9};

    hello(arr, 5);

    return 0;
}