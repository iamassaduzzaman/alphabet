#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // array one
    int size1;
    scanf("%d", &size1);
    int numbers1[size1];
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &numbers1[i]);
    }

    // array two
    int size2;
    scanf("%d", &size2);
    int numbers2[size2];
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &numbers2[i]);
    }

    // coping numbers1 array to twoNum array
    int twoNum[size1 + size2];
    for (int i = 0; i < size1; i++)
    {
        twoNum[i] = numbers1[i];
    }

    // coping numbers2 array to twoNum array
    int k = size1;
    for (int j = 0; j < size2; j++)
    {
        twoNum[k] = numbers2[j];
        k++;
    }

    // print the twoNum array
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", twoNum[i]);
    }
    return 0;
}