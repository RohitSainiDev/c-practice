#include <stdio.h>

int main()
{
    float length, breadth;

    printf("Enter the length of the rectangle: \n");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: \n");
    scanf("%f", &breadth);

    float perimeter = 2 * (length + breadth);
    printf("Perimeter of the rectangle: %f", perimeter);

    return 0;
}