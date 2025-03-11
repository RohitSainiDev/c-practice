#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: \n");
    scanf("%d", &num);

    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            ++count;
        }
    }

    if (count == 2)
    {
        printf("You entered a prime number");
    }
    else
    {
        printf("Not a prime number");
    }

    return 0;
}
