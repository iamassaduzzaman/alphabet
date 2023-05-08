#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int *b, int sz)
{
    b[1] = 69;
}

int main()
{
    int num[] = {4, 5, 30, 10};

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    fun(num, 4);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}