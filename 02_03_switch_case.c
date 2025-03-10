#include <stdio.h>

int main()
{
    int day;
    // 1- Mon, 2-Tue and so on
    printf("Enter day number(1-7): \n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wednesday \n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");
        break;
    case 7:
        printf("Sunday \n");
        break;
    default:
        printf("Invalid day number \n");
        break;
    }
    // In switch-case statements we can have any order in which we write our cases. Also switch-case can be nested.

    return 0;
}