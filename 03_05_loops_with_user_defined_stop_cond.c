#include <stdio.h>

int main()
{
    // For loop with user input
    int stop_count;

    printf("Enter an integer: \n");
    scanf("%d", &stop_count);

    for (int i = 1; i <= stop_count; i++)
    {
        printf("%d \n", i);
    }

    printf("\n");

    // While loop with user input

    printf("Re-enter an integer: \n");
    scanf("%d", &stop_count);

    int j = 1;
    while (j <= stop_count)
    {
        printf("%d \n", j);
        j++;
    }

    return 0;
}