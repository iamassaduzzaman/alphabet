#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    float min_sleep = 72; // assuming a person can sleep maximum 3 days in three days
    float one = 0, two = 0, three = 0;

    for (int i = 0; i < n; i++)
    {
        float a, b, c;
        scanf("%f %f %f", &a, &b, &c);
        float avg = (a + b + c) / 3.0;
        if (min_sleep >= avg)
        {
            min_sleep = avg;
            one = a;
            two = b;
            three = c;
        }
    }

    printf("%.2f\n", min_sleep);
    printf("%.1f %.1f %.1f\n", one, two, three);
    return 0;
}