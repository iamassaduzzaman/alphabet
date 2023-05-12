#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        long long int s, a, b, c;
        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);

        long long int missingNumber = s - (a + b + c);
        printf("%lld\n", missingNumber);
    }

    return 0;
}