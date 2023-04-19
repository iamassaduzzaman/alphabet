#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch[5];
    int size = sizeof(ch) / sizeof(char); // sizeof(ch) = 5 (cause char hold 1 byte memory), sizeof(char) = 1
    printf("length of ch = %d\n", size);

    int num[6];
    int sizeNum = sizeof(num) / sizeof(int); // sizeof(num) = 24 (cause integer hold 4 bytes memory so 4*6 = 24), sizeof(int) = 4
    printf("length of num = %d", sizeNum);

    return 0;
}