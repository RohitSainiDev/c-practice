#include <stdio.h>

void namaste();
void bonjour();

int main()
{
    char ch;

    printf("Enter 'I' for Indian and 'F' for French: \n");
    scanf("%c", &ch);

    if (ch == 'I')
    {
        namaste();
    }
    else if (ch == 'F')
    {
        bonjour();
    }
    else
    {
        printf("Invalid choice \n");
    }

    return 0;
}

void namaste()
{
    printf("Namaste! \n");
}

void bonjour()
{
    printf("Bonjour! \n");
}
