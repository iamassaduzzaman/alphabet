#include <stdio.h>

int main()
{
    int timon, pumbaa, remain;
    scanf("%d %d", &timon, &pumbaa);
    
    remain = timon - pumbaa;

    if(remain >= 0)
    {
        printf("%d\n", remain);
    }
    else
    {
        printf("0\n");
    }

    return 0;
}