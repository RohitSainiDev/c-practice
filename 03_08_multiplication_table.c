#include<stdio.h>

int main()
{
    int num;

    printf("Enter an integer: \n");
    scanf("%d", &num);

    int i = 1;
    while(i<=10)
    {
        printf("%d \n", num * i);
        i++;
    }

    return 0;
}