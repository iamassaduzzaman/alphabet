#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int num[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    int flag = 1;
    // wheather square matrix
    if (row != col)
    {
        flag = 0;
    }

    // wheather every elements zero
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i+j == row-1)
            {
                continue;
            }
            if (num[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
    {
        printf("Diagonal Matrix\n");
    }
    else
    {
        printf("Not Diagonal\n");
    }
    return 0;
}