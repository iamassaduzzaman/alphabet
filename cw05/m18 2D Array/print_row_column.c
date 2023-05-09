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

    // print exact row
    printf("which row you want to print: ");
    int x;
    scanf("%d", &x);

    for (int i = 0; i < col; i++)
    {
        printf("%d ", num[x][i]);
    }
    printf("\n\n");

    // print exat column
    printf("which column you want to print: ");
    int y;
    scanf("%d", &y);

    for (int i = 0; i < row; i++)
    {
        printf("%d\n", num[i][y]);
    }
    return 0;
}