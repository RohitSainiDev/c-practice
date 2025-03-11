#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: \n");
    scanf("%d", &num);

    for (int j = 1; j <= num; j++)
    {
        int count = 0;
        int i = 1;
        for (; i <= j; i++)
        {
            if (j % i == 0)
            {
                ++count;
            }
        }

        if (count == 2)
        {
            printf("%d \n", j);
        }
    }
    return 0;
}