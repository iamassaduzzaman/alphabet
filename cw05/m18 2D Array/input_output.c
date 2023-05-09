#include <stdio.h>

int main()
{
    // declaration of 2D Array
    int num[3][2];

    // taking input for 2D Array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    // outpur for 2D Array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

// remember it's always 
// name_of_array[how many 1D Array][1D Array sizec]
// [row] * [column]