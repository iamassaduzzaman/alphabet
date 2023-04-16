#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);

    // array declaration
    int number[size + 1];

    // read value for number arrry
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &number[i]);
    }

    // position and number
    int num, position;
    scanf("%d %d", &position, &num);

    // swaping value one position to another
    for (int i = size; i > position - 1; i--) // think aboiut index of array not position of array
    {
        number[i] = number[i - 1];
    }

    // assigning new value in given position
    number[position - 1] = num;

    // print the new nnumber array
    for (int i = 0; i < size + 1; i++)
    {
        printf("%d ", number[i]);
    }

    return 0;
}