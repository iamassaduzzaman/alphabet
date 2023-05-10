#include <stdio.h>


int summation(int *A, int i, int n)
{
    // base case
    if (i == n) return 0;

    // int s = 0;
    // s += A[i];
    // summation(A, i+1, n);

    int s = A[i] + summation(A, i+1, n);
    return s;
    
    
}
int main()
{
    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int sum = summation(A, 1, n);
    printf("%d\n", sum + A[0]);
    return 0;
}