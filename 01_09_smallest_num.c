#include <stdio.h>

int main()
{
    int num_1, num_2, num_3;

    printf("Enter three integers: \n");
    scanf("%d %d %d", &num_1, &num_2, &num_3);

    printf("%d is smallest(1 = true, 0 = false): %d \n", num_1, num_1 <= num_2 && num_1 <= num_3);
    printf("%d is smallest(1 = true, 0 = false): %d \n", num_2, num_2 <= num_1 && num_2 <= num_3);
    printf("%d is smallest(1 = true, 0 = false): %d \n", num_3, num_3 <= num_1 && num_3 <= num_2);

    return 0;
}