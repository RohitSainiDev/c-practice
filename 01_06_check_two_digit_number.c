#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("Whether the entered number is a two digit number(1 = true, 0 = false):%d \n", num > 9 && num < 100);

    return 0;
}