#include <stdio.h>

int main()
{
    int num;
    do
    {
        printf("Enter a number: \n");
        scanf("%d", &num);
        printf("%d \n", num);

        if (num % 7 == 0)
        {
            break;
        }

    } while (1);

    return 0;
}