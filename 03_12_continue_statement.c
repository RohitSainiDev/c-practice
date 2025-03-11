#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue; // skips all the multiples of 2 but keeps the loop running unlike the break statement
        }

        printf("%d \n", i);
    }

    return 0;
}