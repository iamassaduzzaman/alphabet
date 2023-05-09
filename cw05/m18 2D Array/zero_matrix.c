#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int zeroMatrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &zeroMatrix[i][j]);
        }
    }

    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (zeroMatrix[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (row * col == count)
    {
        printf("Zero Matrix\n");
    }
    else
    {
        printf("Not a Zero Matrix\n");
    }
    return 0;
}