#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        long long int s, f;
        scanf("%lld %lld", &s, &f);

        if (s < f)
        {
            long long int s1 = s * (s + 1) / 2, s2 = f * (f + 1) / 2;
            long long int s3 = s2 - s1 + s;
            printf("%lld\n", s3);
        }
        else
        {
            long long int s1 = s * (s + 1) / 2, s2 = f * (f + 1) / 2;
            long long int s3 = s1 - s2 + f;
            printf("%lld\n", s3);
        }
    }
    return 0;
}