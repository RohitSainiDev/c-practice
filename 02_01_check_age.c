#include <stdio.h>

int main()
{
    int age;

    printf("Kindly enter your age:\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are an adult. \n");
    }
    else // The else part is not madatory, we can skip it if required
    {
        printf("You are not an adult. \n");
    }

    return 0;
}