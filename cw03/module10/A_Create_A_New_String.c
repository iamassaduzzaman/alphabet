#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[1001];
    char t[1001];

    scanf("%s %s", &s, &t);

    int sL = strlen(s);
    int tL = strlen(t);

    printf("%d %d\n", sL, tL);
    printf("%s %s\n", s, t);
    return 0;
}