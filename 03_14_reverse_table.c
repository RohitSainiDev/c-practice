#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: \n");
    scanf("%d", &num);

    for (int i = 10; i > 0; i--)
    {
        printf("%d \n", num * i);
    }

    return 0;
}