#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int lengthRecursion(char *hi, int i)
{
   if (hi[i] == '\0') return 0;
   int l = lengthRecursion(hi, i+1);
   return l+1;
}
int main()
{
    char hi[] = "hello";

    int len = lengthRecursion(hi, 0);
    printf("%d\n", len);
    return 0;
}