#include <stdio.h>

int main()
{
    // Difference between while and do-while loop ---->  do-while loop is atleast executed once

    int stop_count;

    printf("Enter an integer: \n");
    scanf("%d", &stop_count);

    int i = 1;
    do
    {
        printf("%d \n", i);
        i++;
    } while (i <= stop_count);

    // Reverse print
    printf("Re enter the previous input: \n");
    scanf("%d", &stop_count);

    i = stop_count;
    do
    {
        printf("%d \n", i);
        i--;
    } while (i > 0);

    return 0;
}