#include <stdio.h>

int main()
{
    int marks;

    printf("Please enter your marks: \n");
    scanf("%d", &marks);

    if (marks >= 33 && marks <= 70)
    {
        printf("Grade B \n");
    }
    else if (marks >= 0 && marks < 33)
    {
        printf("Grade C \n");
    }
    else if (marks > 70 && marks <= 90)
    {
        printf("Grade A \n");
    }
    else if (marks > 90 && marks <= 100)
    {
        printf("Grade A+ \n");
    }
    else
    {
        printf("Please enter correct marks(0-100)\n");
    }

    return 0;
}