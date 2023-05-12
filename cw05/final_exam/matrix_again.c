#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int again[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &again[i][j]);
        }
    }

    // last row
    for (int i = row - 1; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", again[i][j]);
        }
        printf("\n");
    }

    // last column
    for (int i = col - 1; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", again[j][i]);
        }
    }
    return 0;
}