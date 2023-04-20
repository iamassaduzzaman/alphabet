#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // read a string
    char word[1001];
    scanf("%s", &word);

    // measure the length
    int len = strlen(word);

    // copy the string in another variable
    char cword[1001];
    for (int i = 0; i < len; i++)
    {
        cword[i] = word[i];
    }

    // reverse the main word
    int i = 0, k = len - 1, j = 0;
    while (i < k)
    {
        char temp = word[i];
        word[i] = word[k];
        word[k] = temp;
        i++;
        k--;
    }

    // check whether main reverse word and main word same
    while (j < len)
    {
        if (cword[j] == word[j])
        {
            j++;
        }
        else
        {
            break;
        }
    }

    // print condition wise
    if (len == j)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}