#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int M1, M2, D;
    scanf("%d %d %d", &M1, &M2, &D);

    int tfm2 = (M1 * D) / M2;

    printf("%d\n", tfm2);
    return 0;
}