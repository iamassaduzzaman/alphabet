#include <stdio.h>

long long int summation(int *A, int i, int n)
{
   if (i == n) return 0;

   long long int s = A[i] + summation(A, i+1, n);
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

    long long int r = summation(A, 0, n);
    printf("%lld", r);
    return 0;
}