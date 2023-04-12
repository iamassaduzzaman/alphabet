#include <stdio.h>

int main()
{
    long long int e, m, b;
    scanf("%lld %lld %lld", &e, &m, &b);

    // checking option 3
    long long min = 0;
    if (e >= 1 && m >= 1 && b >= 1)
    {

        if (e <= m && e <= b)
        {
            min = e;
        }
        if (m <= e && m <= b)
        {
            min = m;
        }
        if (b <= m && b <= e)
        {
            min = b;
        }

        e -= min; // 66
        m -= min; // 0
        b -= min; // 65
    }

    // checking option 1
    long long int max = 0;
    if (e >= b && (b != 0))
    {
        if(e >= b*2)
        {
            max = b;
        }
        else
        {
            max = e/2;
        }
    }

    if (b >= e && (e != 0))
    {
        max = e / 2;
    }

    // largest number of Katryoshkas
    long long int largest = min + max;

    printf("%lld\n", largest);
    return 0;
}