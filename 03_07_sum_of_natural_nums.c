#include <stdio.h>

int main()
{
    int num;

    printf("Enter a natural number: \n");
    scanf("%d", &num);

    // Calculating sum and also printing the natural numbers in reverse

    int sum = 0;
    for (int i = 1, j = num; i <= num && j >= 1; i++, j--)
    // Condition checking part of for loop make use of logical operator to combine two conditions(note the seperating symbols carefully)
    {
        sum += i;
        printf("%d \n", j);
    }

    printf("\nSum:%d", sum);

    // Another simpler approach
    /*
    int sum = 0;
    for (int i = num; i >= 1; i--)
    {
        sum += i;
        printf("%d \n", i);
    }

    printf("\nSum:%d", sum);
    */

    return 0;
}