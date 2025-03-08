#include <stdio.h>

int main()
{
    int num;

    printf("Enter an Integer:\n");
    scanf("%d", &num);

    int cube = num * num * num;
    printf("Cube is: %d", cube);

    return 0;
}