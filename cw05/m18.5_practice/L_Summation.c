#include <stdio.h>


int summation(int *A, int i, int n)
{
   if (i == n) return 0;

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

    int r = summation(A, 0, n);
    printf("%d\n", r);
    return 0;
}