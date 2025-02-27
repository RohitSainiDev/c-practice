#include <stdio.h>

int main()
{
    float radius;

    printf("Enter radius of the circle:\n");
    scanf("%f", &radius);

    float area = 3.14 * radius * radius;
    printf("Area of the circle is: %f", area);

    return 0;
}