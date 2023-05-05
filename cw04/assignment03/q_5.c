#include <stdio.h>
#include <string.h>

int is_palindrome(char *word, int size)
{
    // coping string to a new array
    char rerverseWord[size];
    for (int k = 0; k < size; k++)
    {
        rerverseWord[k] = word[k];
    }

    // reversing main array
    int i = 0, j = size - 1;
    while (i < j)
    {
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }

    // checking whether palindrome
    int flag = 1;
    for (int m = 0; m < size; m++)
    {
        if (word[m] != rerverseWord[m])
        {
            flag = 0;
        }
    }

    return flag;
}

int main()
{

    char word[10];
    scanf("%s", word);
    int len = strlen(word);

    int val = is_palindrome(word, len);
    if (val == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}