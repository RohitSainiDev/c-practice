#include <stdio.h>

int main()
{
    int num = 0;

    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("Entered number is divisible by 2(1 = true, 0 = false):%d \n", num % 2 == 0);

    return 0;
}