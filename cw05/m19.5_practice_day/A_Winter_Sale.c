#include <stdio.h>

int main()
{
    float x, p;
    scanf("%f %f", &x, &p);

    float r = 100 - x;

    float mainPrice = p * (100 / r);
    printf("%.2f\n", mainPrice);
    return 0;
}