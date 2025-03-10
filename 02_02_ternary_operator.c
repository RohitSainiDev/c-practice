#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: \n");
    scanf("%d", &age);

    age >= 18 ? printf("You are an adult") : printf("You are not an adult");

    return 0;
}