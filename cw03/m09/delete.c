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

    // remove position starting from zero
    int position;
    scanf("%d", &position);

    // swaping value one position to another
    for (int i = position; i < size; i++) // deleting the position's value of array
    {
        number[i] = number[i + 1];
    }

    // print the new nnumber array
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", number[i]);
    }

    return 0;
}