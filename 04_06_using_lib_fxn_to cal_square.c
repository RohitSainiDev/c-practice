#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Enter an integer:\n");
    scanf("%d", &num);

    double square = pow(num, 2);
    printf("Square of the entered number is: %f \n", square);

    return 0;
}