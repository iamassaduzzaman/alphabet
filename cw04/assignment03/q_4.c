

// 1. Has Return + Parameter
#include <stdio.h>

// return sum of two number
int sum(int x, int y)
{
    int sumVal = x + y;
    return sumVal;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int val = sum(a, b);
    printf("%d\n", val);
    return 0;
}



// -----------------------------------------------------------
// 2. Has Return + No Parameter
#include <stdio.h>

// return sum of all elements in array
int sumOfArrayElements()
{
    int N, sum = 0;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < N; j++)
    {
        sum += arr[j];
    }

    return sum;
}

int main()
{
    int value = sumOfArrayElements();
    printf("%d\n", value);
    return 0;
}



// -----------------------------------------------------------
// 3. No Return + Parameter
#include <stdio.h>

// reverse a the number
void reverseIt(int x)
{
    int reverse = 0, remainder = 0;
    while (x != 0)
    {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x = x / 10;
    }

    printf("%d\n", reverse);
}

int main()
{
    int n;
    scanf("%d", &n);

    reverseIt(n);
    return 0;
}



// -----------------------------------------------------------
// 4. No Return + No Parameter
#include <stdio.h>

// ask name
void whatYourName()
{
    char name[100];
    fgets(name, 100, stdin);
    printf("%s\n", name);
}

int main()
{
    whatYourName();
    return 0;
}



