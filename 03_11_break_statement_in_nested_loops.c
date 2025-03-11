#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 20; j++)
        {
            if (j > 10)
            {
                break; // breaks the inner loop only
            }
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}