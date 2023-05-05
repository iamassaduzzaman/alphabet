#include <stdio.h>

// count how many digit before zero came in 
int count_before_zero(int* numbers, int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
    {
        if (numbers[i] == 0)
        {
            break;
        }
        count++;
    }

    return count;
}


int main()
{
    int n;
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int count = count_before_zero(numbers, n);

    printf("%d\n", count);
    return 0;
}