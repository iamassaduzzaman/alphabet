#include <stdio.h>

long long int fac(int n, int i)
{
    // base case
    if (i == n+1) return 1;
    long long int s = i * fac(n, i+1);
    
    return s;
}

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int r = fac(n, 1);
    printf("%lld", r);
    return 0;
}