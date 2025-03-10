#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: \n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase alphabet \n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase alphabet \n");
    }
    else
    {
        printf("Not an alphabet \n");
    }

    return 0;
}