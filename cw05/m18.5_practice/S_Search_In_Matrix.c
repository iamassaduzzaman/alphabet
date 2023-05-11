#include <stdio.h>


int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int search[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &search[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    int flag = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (search[i][j] == x)
            {
                flag = 0;
            }
        }
    }

    if (flag == 0)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }
    return 0;
}