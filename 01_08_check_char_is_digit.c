#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: \n");
    scanf("%c", &ch);

    printf("Enter character is a digit(1 = true, 0 = false): %d", (int)ch >= 48 && (int)ch <= 57); // ASCII codes for '0' = 48 and '9' = 57

    return 0;
}