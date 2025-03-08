#include <stdio.h>

int main()
{
    int num_1, num_2, num_3;

    printf("Enter three integers: \n");
    scanf("%d %d %d", &num_1, &num_2, &num_3);

    int avg = (num_1 + num_2 + num_3) / 3;
    printf("Average of the three numbers: %d \n", avg);

    return 0;
}