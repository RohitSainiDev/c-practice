#include <stdio.h>

int main()
{
    // i is called iterator or counter
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", i);
    }

    printf("\n");

    for (char ch ='A'; ch <= 'Z';ch++)
    {
        printf("%c \t", ch);
    }

        return 0;
}