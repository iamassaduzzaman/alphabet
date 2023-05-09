#include <stdio.h>

void back_to_one(int i)
{
    
    if (i == 0) return; // base case

    printf("%d\n", i);
    back_to_one(--i);
}

int main()
{
    back_to_one(5);
    return 0;
}