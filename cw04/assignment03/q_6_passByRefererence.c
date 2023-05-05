/*
Pass by reference is a way to pass the memory address of a
variable as an argument to a function, allowing the function
to modify the original variable.

For example: In the following code,
the passByReference function takes a pointer to an integer (int *num) as an argument.
The function then dereferences the pointer (*num) and modifies the value stored at the memory address passed in.
When passByReference(&x) is called in main(), the memory address of x is passed in,
and allow the passByReference function to modify the value of x.
*/

#include <stdio.h>

void passByReference(int *num)
{
    *num = 100;
}

int main()
{
    int x = 5;
    passByReference(&x);

    printf("%d", x); 
    return 0;
}
