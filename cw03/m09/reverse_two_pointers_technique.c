#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);

    // array declaration
    int number[size];

    // read value for number arrry
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &number[i]);
    }

    // two pointers technique for reversing an array
    int i = 0, j = size - 1;
    while (i < j)
    {
        int temp = number[i];
        number[i] = number[j];
        number[j] = temp;
        i++;
        j--;
    }

    // print the new number array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", number[i]);
    }

    return 0;
}
