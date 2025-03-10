#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age); // Common beginner mistake ----> Missing '&' while taking input

    printf("Your age is: %d", age);

    return 0;
}