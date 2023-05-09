#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    for(int i = 1; i <= 20; i++)
    {
        sum +=i;
    }

    if (sum % 2 != 0)
    {
        printf("Odd\n");
    }
    else
    {
        printf("Even\n");
    }
    return 0;
}