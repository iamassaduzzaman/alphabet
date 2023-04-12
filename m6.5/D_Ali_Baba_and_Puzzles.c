#include <stdio.h>

int main()
{
    long int a, b, c, d;
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);

    if(a + b - c == d)
    {
        printf("YES\n");
    }
    else if(a + b * c == d)
    {
        printf("YES\n");
    }
    else if(a - b + c == d)
    {
        printf("YES\n");
    }
    else if(a - b * c == d)
    {
        printf("YES\n");
    }
    else if(a * b + c == d)
    {
        printf("YES\n");
    }
    else if(a * b - c == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}