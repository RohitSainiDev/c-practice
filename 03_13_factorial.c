#include <stdio.h>

int main()
{
    int num;

    printf("Enter a small integer: \n");
    scanf("%d", &num);

    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    printf("Factorial of %d is %d", num, fact);

    return 0;
}
