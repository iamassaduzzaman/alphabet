 #include <stdio.h>
 
int main()
{
    //  An array is a collection of data items, all of the same type

    /* Array in C can be defined as a method of clubbing multiple entities of similar type into a larger group.
     These entities or elements can be of int, float, char, or double data type or can be of 
     user-defined data types too like structures */


    // Creating an integer array named arr of size 10.
    int arr[10];
    // accessing element at 0 index and setting its value
    // to 5.
    arr[0] = 5;
    // access and print value at 0 index we get the output
    // as 5.
    printf("%d", arr[0]);
 
    return 0;
}