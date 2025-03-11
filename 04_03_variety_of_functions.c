#include<stdio.h>
void print_table(int num);
int sum(int num_1, int num_2);
int main()
{
    int num;

    printf("Enter the number to print the table of: \n");
    scanf("%d", &num);
   
    print_table(num);

    int num_1, num_2;

    printf("Enter the two integers: \n");
    scanf("%d %d", &num_1, &num_2);

    int result = sum(num_1, num_2);
    printf("The sum of the two integers is: %d\n", result);

    return 0;
}

void print_table(int num)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}

int sum(int num_1, int num_2)
{
    return num_1 + num_2;
}