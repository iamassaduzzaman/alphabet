#include <stdio.h>

void evenIndex(int *arr, int i, int n)
{
    // base case
    if (i == n)
        return;
    
    // if total array elemnts is even 
    if (n % 2 == 0)
    {
        if (i % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    
    // if total array elements is odd
    if (n % 2 != 0)
    {
        if (i % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    evenIndex(arr, i + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // reverse the array
    int m = 0, k = n - 1;
    while (m < k)
    {
        int temp = arr[m];
        arr[m] = arr[k];
        arr[k] = temp;
        m++;
        k--;
    }

    evenIndex(arr, 0, n);

    return 0;
}