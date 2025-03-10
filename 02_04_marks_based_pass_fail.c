#include <stdio.h>

int main()
{
    int marks;

    printf("Please enter your marks: \n");
    scanf("%d", &marks);

    if (marks >= 33 && marks <= 100)
    {
        printf("Congrats! you passed the exam \n");
    }
    else if (marks >= 0 && marks < 33)
    {
        printf("Sorry, you failed the exam \n");
    }
    else
    {
        printf("Please enter correct marks(0-100) \n");
    }

    return 0;
}