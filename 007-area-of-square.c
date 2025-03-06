#include <stdio.h>

int main()
{
    float side;

    printf("Enter side of the square: \n");
    scanf("%f", &side);

    float area = side * side;
    printf("Area of square is: %f", area);

    return 0;
}