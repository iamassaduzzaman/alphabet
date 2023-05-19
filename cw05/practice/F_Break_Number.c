#include <stdio.h>
#include <limits.h>
int main()
{
    // reading input
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    
    // counting max division times for each elements and storing it
    long long int a2[n];
    for (int i = 0; i < n; i++)
    {
        long long int count = 0;
        long long int remain = a[i];
        while (remain % 2 == 0)
        {
            remain = remain / 2;
            count++;
        }
        a2[i] = count;
        count = 0;
    }

    // find the max number from a2 array
    long long int max = a2[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a2[i])
        {
            max = a2[i];
        }
    }

    printf("%lld\n", max);
    return 0;
}