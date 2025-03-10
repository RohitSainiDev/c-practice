#include <stdio.h>

int main()
{
    // Common mistake: we often forget to update the counter variable in while loops, leading to infinite loops
    int i = 1;
    while (i <= 10)
    {
        printf("%d \n", i);
        i++;
    }

    printf("\n");

    char ch = 'A';
    while (ch <= 'Z')
    {
        printf("%c \t", ch);
        ch++;
    }

    return 0;
}