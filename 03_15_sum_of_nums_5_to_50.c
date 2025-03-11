#include<stdio.h>

int main()
{
    int sum = 0;

    for (int i = 5; i <= 50;i++)
    {
        sum += i;
    }

    printf("Sum of all numbers[5,50]:%d \n", sum);

    return 0;
}
