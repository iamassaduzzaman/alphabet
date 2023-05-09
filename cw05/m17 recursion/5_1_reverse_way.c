#include <stdio.h>

void num(int n)
{
    if (n == 6) return; // base case
        
    num(++n);
    printf("%d\n", n);
    
}

int main()
{
    num(1);
    return 0;
}